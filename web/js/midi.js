var midiSupport = (function(midiSupport) {
  var listeners = [];
  midiSupport.addListener = function(obj) {
    listeners.push(obj);
  }
  midiSupport.removeListener = function(obj) {
    var idx = listeners.indexOf(obj);
    if (idx === -1) {
      return;
    }
    listeners.splice(idx, 1);
  }

  function callListener(f, n) {
    for (var i in listeners) {
      try {
        listeners[i][f](n);
      } catch(e) {
        console.error(e);
      }
    }
  }

  function noteOn(n)  { callListener('noteOn',  n); }
  function noteOff(n) { callListener('noteOff', n); }

  var currentInput;
  function connectMidi(input) {
    if (currentInput) {
      currentInput.onmidimessage = null;
    }
    currentInput = input;
    console.log('connecting', input.name);
    input.onmidimessage = function(ev) {
      var cmd = ev.data[0] >> 4;
      var channel = ev.data[0] & 0xf;
      var noteNumber = ev.data[1];
      var velocity = ev.data[2];

      if (channel == 9)
        return
      if ( cmd==8 || ((cmd==9)&&(velocity==0)) ) { // with MIDI, note on with velocity zero is the same as note off
        noteOff(noteNumber);
      } else if (cmd == 9) {
        noteOn(noteNumber);
      }
    }
  }

  if (navigator.requestMIDIAccess) {
    var preferredInputRegex = /keyboard/i;
    navigator.requestMIDIAccess().then(function(midi) {
      console.log('we have midi', midi);

      var midiInput;
      var i = midi.inputs.values();
      var tmp;
      for (tmp = i.next(); tmp && !tmp.done; tmp = i.next()) {
        if (preferredInputRegex.exec(tmp.value.name)) {
          midiInput = tmp;
          break;
        }
      }
      if (midiInput === undefined) {
        midiInput = tmp;
      }

      if (midiInput) {
        connectMidi(midiInput.value);
      }

    }, function(err) {
      console.log(err);
      alert('Problems with MIDI');
    });
  }
  return midiSupport;
}(midiSupport || {}));
