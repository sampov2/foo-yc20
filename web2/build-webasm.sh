#!/bin/bash

TEMPFILE=$(mktemp --suffix=.dsp)
echo tempfile: $TEMPFILE

FDIR=$(dirname $0)/../faust
cat \
    $FDIR/biquad.dsp \
    $FDIR/divider.dsp \
    $FDIR/mixer.dsp \
    $FDIR/percussion.dsp \
    $FDIR/rc_filter.dsp \
    $FDIR/wave_transformer.dsp \
    $FDIR/keyboard.dsp \
    $FDIR/oscillator.dsp \
    $FDIR/vibrato.dsp \
    $FDIR/yc20.dsp \
    $FDIR/osc_faust.dsp \
    $FDIR/web.dsp | egrep -ve "^import .*[.]dsp" > $TEMPFILE

$(dirname $0)/node_modules/.bin/faust2wasm-ts $TEMPFILE $(dirname $0)/test/out

rm $TEMPFILE

# plugin.dsp  