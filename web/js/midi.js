/**
 * Simple wrapper around basic midi event parsing and connection / disconnection logic
 **/
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
  midiSupport.connectInput = function(input) {
    if (currentInput) {
      currentInput.onmidimessage = null;
    }
    currentInput = input;
    input.onmidimessage = function(ev) {
      var cmd = ev.data[0] >> 4;
      var channel = ev.data[0] & 0xf;
      var noteNumber = ev.data[1];
      var velocity = ev.data[2];

      if (channel == 9)
        return
      if ( cmd==8 || ((cmd==9)&&(velocity==0)) ) {
        noteOff(noteNumber);
      } else if (cmd == 9) {
        noteOn(noteNumber);
      }
    }
  }

  midiSupport.onInputsAvailable = function() { /* NOP by default */ }
  midiSupport.onError = function() { /* NOP by default */ }

  if (navigator.requestMIDIAccess) {
    navigator.requestMIDIAccess().then(function(midi) {
      var i = midi.inputs.values();
      var tmp, allInputs = [];
      for (tmp = i.next(); tmp && !tmp.done; tmp = i.next()) {
        allInputs.push(tmp.value);
      }

      midiSupport.onInputsAvailable(allInputs);

    }, function(err) {
      midiSupport.onError(err);
    });
  }
  return midiSupport;
}(midiSupport || {}));
