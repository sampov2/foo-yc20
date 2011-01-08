/*
    YC-20 keyboard mixer implementation in Faust
    Copyright(C) 2010 Sampo Savolainen <v2@iki.fi>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/
// 5 octaves + one C = 61 keys

key_slowdown(x) = (x@3 + x@2 + x@1 + x)/4;

// Bottom 17 keys is the switchable bass manual
key_c0 = button("c0") : key_slowdown;
key_C0 = button("C0") : key_slowdown;
key_d0 = button("d0") : key_slowdown;
key_D0 = button("D0") : key_slowdown;
key_e0 = button("e0") : key_slowdown;
key_f0 = button("f0") : key_slowdown;
key_F0 = button("F0") : key_slowdown;
key_g0 = button("g0") : key_slowdown;
key_G0 = button("G0") : key_slowdown;
key_a0 = button("a0") : key_slowdown;
key_A0 = button("A0") : key_slowdown;
key_b0 = button("b0") : key_slowdown;

key_c1 = button("c1") : key_slowdown;
key_C1 = button("C1") : key_slowdown;
key_d1 = button("d1") : key_slowdown;
key_D1 = button("D1") : key_slowdown;
key_e1 = button("e1") : key_slowdown;

// The rest is regular manual
key_f1 = button("f1") : key_slowdown;
key_F1 = button("F1") : key_slowdown;
key_g1 = button("g1") : key_slowdown;
key_G1 = button("G1") : key_slowdown;
key_a1 = button("a1") : key_slowdown;
key_A1 = button("A1") : key_slowdown;
key_b1 = button("b1") : key_slowdown;

key_c2 = button("c2") : key_slowdown;
key_C2 = button("C2") : key_slowdown;
key_d2 = button("d2") : key_slowdown;
key_D2 = button("D2") : key_slowdown;
key_e2 = button("e2") : key_slowdown;
key_f2 = button("f2") : key_slowdown;
key_F2 = button("F2") : key_slowdown;
key_g2 = button("g2") : key_slowdown;
key_G2 = button("G2") : key_slowdown;
key_a2 = button("a2") : key_slowdown;
key_A2 = button("A2") : key_slowdown;
key_b2 = button("b2") : key_slowdown;

key_c3 = button("c3") : key_slowdown;
key_C3 = button("C3") : key_slowdown;
key_d3 = button("d3") : key_slowdown;
key_D3 = button("D3") : key_slowdown;
key_e3 = button("e3") : key_slowdown;
key_f3 = button("f3") : key_slowdown;
key_F3 = button("F3") : key_slowdown;
key_g3 = button("g3") : key_slowdown;
key_G3 = button("G3") : key_slowdown;
key_a3 = button("a3") : key_slowdown;
key_A3 = button("A3") : key_slowdown;
key_b3 = button("b3") : key_slowdown;

key_c4 = button("c4") : key_slowdown;
key_C4 = button("C4") : key_slowdown;
key_d4 = button("d4") : key_slowdown;
key_D4 = button("D4") : key_slowdown;
key_e4 = button("e4") : key_slowdown;
key_f4 = button("f4") : key_slowdown;
key_F4 = button("F4") : key_slowdown;
key_g4 = button("g4") : key_slowdown;
key_G4 = button("G4") : key_slowdown;
key_a4 = button("a4") : key_slowdown;
key_A4 = button("A4") : key_slowdown;
key_b4 = button("b4") : key_slowdown;

key_c5 = button("c5") : key_slowdown;


// This will be needed later on
bass_engaged = hgroup("bass",hslider("[3]bass manual",0.0, 0.0, 1.0, 1.0));

// This implementation uses every voice and has equal number of outputs
// when compared to the "slow" (read "correct") version
keyboard_fast(
	 c8,c7,c6,c5,c4,c3,c2,c1,
	 C8,C7,C6,C5,C4,C3,C2,C1,
	 d8,d7,d6,d5,d4,d3,d2,d1,
	 D8,D7,D6,D5,D4,D3,D2,D1,
	 e8,e7,e6,e5,e4,e3,e2,e1,
	 f8,f7,f6,f5,f4,f3,f2,f1,
	 F8,F7,F6,F5,F4,F3,F2,F1,
	 g8,g7,g6,g5,g4,g3,g2,g1,
	 G8,G7,G6,G5,G4,G3,G2,G1,
	 a8,a7,a6,a5,a4,a3,a2,a1,
	 A8,A7,A6,A5,A4,A3,A2,A1,
	 b8,b7,b6,b5,b4,b3,b2,b1
) = bus_1,
    bus_1_3p5,
    bus_2,
    bus_2_2p3,
    bus_4,
    bus_8,
    bus_16,
    bass_bus_4, 
    bass_bus_8, 
    bass_bus_16
with
{
	bus_1		= c1+c2+c3+c4+c5+c6+c7+c8+c8*bass_engaged;
	bus_1_3p5	= C1+C2+C3+C4+C5+C6+C7+C8+C8;
	bus_2		= d1+d2+d3+d4+d5+d6+d7+d8+d8
			+ A1+A2+A3+A4+A5+A6+A7+A8+A8;
	bus_2_2p3	= D1+D2+D3+D4+D5+D6+D7+D8+D8;
	bus_4 		= e1+e2+e3+e4+e5+e6+e7+e8+e8;
	bus_8		= f1+f2+f3+f4+f5+f6+f7+f8+f8
			+ b1+b2+b3+b4+b5+b6+b7+b8+b8;
	bus_16		= F1+F2+F3+F4+F5+F6+F7+F8+F8;
	bass_bus_4	= g1+g2+g3+g4+g5+g6+g7+g8+g8;
	bass_bus_8	= G1+G2+G3+G4+G5+G6+G7+G8+G8;
	bass_bus_16	= a1+a2+a3+a4+a5+a6+a7+a8+a8;
};

// This function sums the 96 signals together using the above
// defined "buttons"
keyboard(
	 c8,c7,c6,c5,c4,c3,c2,c1,
	 C8,C7,C6,C5,C4,C3,C2,C1,
	 d8,d7,d6,d5,d4,d3,d2,d1,
	 D8,D7,D6,D5,D4,D3,D2,D1,
	 e8,e7,e6,e5,e4,e3,e2,e1,
	 f8,f7,f6,f5,f4,f3,f2,f1,
	 F8,F7,F6,F5,F4,F3,F2,F1,
	 g8,g7,g6,g5,g4,g3,g2,g1,
	 G8,G7,G6,G5,G4,G3,G2,G1,
	 a8,a7,a6,a5,a4,a3,a2,a1,
	 A8,A7,A6,A5,A4,A3,A2,A1,
	 b8,b7,b6,b5,b4,b3,b2,b1
) = bus_1     + bus_1_bleed, 
    bus_1_3p5 + bus_1_3p5_bleed, 
    bus_2     + bus_2_bleed, 
    bus_2_2p3 + bus_2_2p3_bleed, 
    bus_4     + bus_4_bleed, 
    bus_8     + bus_8_bleed,
    bus_16    + bus_16_bleed,
    bass_bus_4, 
    bass_bus_8, 
    bass_bus_16
with
{
	// some measurements show -30..-40dB of overall level change, but it's way too loud,
	// probably as to how the bleed compounds from multiple bus bars.
	// this gain coefficient is selected as -54dB
	bus_bleed_filter = passive_hp(100000.0, 0.001) : *(0.002);
	apply_realism    = *( select2( realism_control >= (5.0/6.0), 0.0, 1.0) );

	// ******** BUS 1

	bus_1     =  (key_c0*c5 + key_C0*C5 + key_d0*d5 + key_D0*D5 + key_e0*e5 + key_f0*f5 + key_F0*F5 + key_g0*g5 + key_G0*G5 + key_a0*a5 + key_A0*A5 + key_b0*b5
	            + key_c1*c6 + key_C1*C6 + key_d1*d6 + key_D1*D6 + key_e1*e6) * (1.0 - bass_engaged)
		                                                                + key_f1*f6 + key_F1*F6 + key_g1*g6 + key_G1*G6 + key_a1*a6 + key_A1*A6 + key_b1*b6
	            + key_c2*c7 + key_C2*C7 + key_d2*d7 + key_D2*D7 + key_e2*e7 + key_f2*f7 + key_F2*F7 + key_g2*g7 + key_G2*G7 + key_a2*a7 + key_A2*A7 + key_b2*b7
	            + key_c3*c8 + key_C3*C8 + key_d3*d8 + key_D3*D8 + key_e3*e8 + key_f3*f8 + key_F3*F8 + key_g3*g8 + key_G3*G8 + key_a3*a8 + key_A3*A8 + key_b3*b8
	            + key_c4*c8 + key_C4*C8 + key_d4*d8 + key_D4*D8 + key_e4*e8 + key_f4*f8 + key_F4*F8 + key_g4*g8 + key_G4*G8 + key_a4*a8 + key_A4*A8 + key_b4*b8
		    + key_c5*c8;

	bus_1_all =  (c5 + C5 + d5 + D5 + e5 + f5 + F5 + g5 + G5 + a5 + A5 + b5
	            + c6 + C6 + d6 + D6 + e6) * (1.0 - bass_engaged)
		                             + f6 + F6 + g6 + G6 + a6 + A6 + b6
	            + c7 + C7 + d7 + D7 + e7 + f7 + F7 + g7 + G7 + a7 + A7 + b7
	            + c8 + C8 + d8 + D8 + e8 + f8 + F8 + g8 + G8 + a8 + A8 + b8
	            + c8 + C8 + d8 + D8 + e8 + f8 + F8 + g8 + G8 + a8 + A8 + b8
		    + c8;

	bus_1_bleed = bus_1_all - bus_1 : bus_bleed_filter : apply_realism;

	// ******** BUS 1 3/5

	bus_1_3p5 =  (key_c0*e4 + key_C0*f4 + key_d0*F4 + key_D0*g4 + key_e0*G4 + key_f0*a4 + key_F0*A4 + key_g0*b4 + key_G0*c5 + key_a0*C5 + key_A0*d5 + key_b0*D5
	            + key_c1*e5 + key_C1*f5 + key_d1*F5 + key_D1*g5 + key_e1*G5) * (1.0 - bass_engaged)
		                                                                + key_f1*a5 + key_F1*A5 + key_g1*b5 + key_G1*c6 + key_a1*C6 + key_A1*d6 + key_b1*D6
	            + key_c2*e6 + key_C2*f6 + key_d2*F6 + key_D2*g6 + key_e2*G6 + key_f2*a6 + key_F2*A6 + key_g2*b6 + key_G2*c7 + key_a2*C7 + key_A2*d7 + key_b2*D7
	            + key_c3*e7 + key_C3*f7 + key_d3*F7 + key_D3*g7 + key_e3*G7 + key_f3*a7 + key_F3*A7 + key_g3*b7 + key_G3*c8 + key_a3*C8 + key_A3*d8 + key_b3*D8
	            + key_c4*e8 + key_C4*f8 + key_d4*F8 + key_D4*g8 + key_e4*G8 + key_f4*a8 + key_F4*A8 + key_g4*b8 + key_G4*c8 + key_a4*C8 + key_A4*d8 + key_b4*D8
		    + key_c5*e8;

	bus_1_3p5_all =(e4+f4 + F4 + g4 + G4 + a4 + A4 + b4 + c5 + C5 + d5 + D5
	            + e5 + f5 + F5 + g5 + G5) * (1.0 - bass_engaged)
		                             + a5 + A5 + b5 + c6 + C6 + d6 + D6
	            + e6 + f6 + F6 + g6 + G6 + a6 + A6 + b6 + c7 + C7 + d7 + D7
	            + e7 + f7 + F7 + g7 + G7 + a7 + A7 + b7 + c8 + C8 + d8 + D8
	            + e8 + f8 + F8 + g8 + G8 + a8 + A8 + b8 + c8 + C8 + d8 + D8
		    + e8;
	
	bus_1_3p5_bleed = bus_1_3p5_all - bus_1_3p5 : bus_bleed_filter : apply_realism;
	
	// ******** BUS 2

	bus_2     =  (key_c0*c4 + key_C0*C4 + key_d0*d4 + key_D0*D4 + key_e0*e4 + key_f0*f4 + key_F0*F4 + key_g0*g4 + key_G0*G4 + key_a0*a4 + key_A0*A4 + key_b0*b4
	            + key_c1*c5 + key_C1*C5 + key_d1*d5 + key_D1*D5 + key_e1*e5) * (1.0 - bass_engaged)
		                                                                + key_f1*f5 + key_F1*F5 + key_g1*g5 + key_G1*G5 + key_a1*a5 + key_A1*A5 + key_b1*b5
	            + key_c2*c6 + key_C2*C6 + key_d2*d6 + key_D2*D6 + key_e2*e6 + key_f2*f6 + key_F2*F6 + key_g2*g6 + key_G2*G6 + key_a2*a6 + key_A2*A6 + key_b2*b6
	            + key_c3*c7 + key_C3*C7 + key_d3*d7 + key_D3*D7 + key_e3*e7 + key_f3*f7 + key_F3*F7 + key_g3*g7 + key_G3*G7 + key_a3*a7 + key_A3*A7 + key_b3*b7
	            + key_c4*c8 + key_C4*C8 + key_d4*d8 + key_D4*D8 + key_e4*e8 + key_f4*f8 + key_F4*F8 + key_g4*g8 + key_G4*G8 + key_a4*a8 + key_A4*A8 + key_b4*b8
		    + key_c5*c8;

	bus_2_all =  (c4 + C4 + d4 + D4 + e4 + f4 + F4 + g4 + G4 + a4 + A4 + b4
	            + c5 + C5 + d5 + D5 + e5) * (1.0 - bass_engaged)
		                             + f5 + F5 + g5 + G5 + a5 + A5 + b5
	            + c6 + C6 + d6 + D6 + e6 + f6 + F6 + g6 + G6 + a6 + A6 + b6
	            + c7 + C7 + d7 + D7 + e7 + f7 + F7 + g7 + G7 + a7 + A7 + b7
	            + c8 + C8 + d8 + D8 + e8 + f8 + F8 + g8 + G8 + a8 + A8 + b8
		    + c8;

	bus_2_bleed = bus_2_all - bus_2 : bus_bleed_filter : apply_realism;

	// ******** BUS 2 2/3

	bus_2_2p3 =  (key_c0*g3 + key_C0*G3 + key_d0*a3 + key_D0*A3 + key_e0*b3 + key_f0*c4 + key_F0*C4 + key_g0*d4 + key_G0*D4 + key_a0*e4 + key_A0*f4 + key_b0*F4
	            + key_c1*g4 + key_C1*G4 + key_d1*a4 + key_D1*A4 + key_e1*b4) * (1.0 - bass_engaged)
		                                                                + key_f1*c5 + key_F1*C5 + key_g1*d5 + key_G1*D5 + key_a1*e5 + key_A1*f5 + key_b1*F5
	            + key_c2*g5 + key_C2*G5 + key_d2*a5 + key_D2*A5 + key_e2*b5 + key_f2*c6 + key_F2*C6 + key_g2*d6 + key_G2*D6 + key_a2*e6 + key_A2*f6 + key_b2*F6
	            + key_c3*g6 + key_C3*G6 + key_d3*a6 + key_D3*A6 + key_e3*b6 + key_f3*c7 + key_F3*C7 + key_g3*d7 + key_G3*D7 + key_a3*e7 + key_A3*f7 + key_b3*F7
	            + key_c4*g7 + key_C4*G7 + key_d4*a7 + key_D4*A7 + key_e4*b7 + key_f4*c8 + key_F4*C8 + key_g4*d8 + key_G4*D8 + key_a4*e8 + key_A4*f8 + key_b4*F8
		    + key_c5*g8;

	bus_2_2p3_all=(g3+ G3 + a3 + A3 + b3 + c4 + C4 + d4 + D4 + e4 + f4 + F4
	            + g4 + G4 + a4 + A4 + b4) * (1.0 - bass_engaged)
		                             + c5 + C5 + d5 + D5 + e5 + f5 + F5
	            + g5 + G5 + a5 + A5 + b5 + c6 + C6 + d6 + D6 + e6 + f6 + F6
	            + g6 + G6 + a6 + A6 + b6 + c7 + C7 + d7 + D7 + e7 + f7 + F7
	            + g7 + G7 + a7 + A7 + b7 + c8 + C8 + d8 + D8 + e8 + f8 + F8
		    + g8;

	bus_2_2p3_bleed = bus_2_2p3_all - bus_2_2p3 : bus_bleed_filter : apply_realism;

	// ******** BUS 4

	bus_4     =  bass_keys_4 * (1.0 - bass_engaged)                         + key_f1*f4 + key_F1*F4 + key_g1*g4 + key_G1*G4 + key_a1*a4 + key_A1*A4 + key_b1*b4
	            + key_c2*c5 + key_C2*C5 + key_d2*d5 + key_D2*D5 + key_e2*e5 + key_f2*f5 + key_F2*F5 + key_g2*g5 + key_G2*G5 + key_a2*a5 + key_A2*A5 + key_b2*b5
	            + key_c3*c6 + key_C3*C6 + key_d3*d6 + key_D3*D6 + key_e3*e6 + key_f3*f6 + key_F3*F6 + key_g3*g6 + key_G3*G6 + key_a3*a6 + key_A3*A6 + key_b3*b6
	            + key_c4*c7 + key_C4*C7 + key_d4*d7 + key_D4*D7 + key_e4*e7 + key_f4*f7 + key_F4*F7 + key_g4*g7 + key_G4*G7 + key_a4*a7 + key_A4*A7 + key_b4*b7
		    + key_c5*c8;

	bus_4_all =  bass_keys_4_all * (1.0 - bass_engaged)
                                             + f4 + F4 + g4 + G4 + a4 + A4 + b4
	            + c5 + C5 + d5 + D5 + e5 + f5 + F5 + g5 + G5 + a5 + A5 + b5
	            + c6 + C6 + d6 + D6 + e6 + f6 + F6 + g6 + G6 + a6 + A6 + b6
	            + c7 + C7 + d7 + D7 + e7 + f7 + F7 + g7 + G7 + a7 + A7 + b7
		    + c8;

	bus_4_bleed = bus_4_all - bus_4 : bus_bleed_filter : apply_realism;

	// ******** BUS 8

	bus_8     = bass_keys_8 * (1.0 - bass_engaged)                          + key_f1*f3 + key_F1*F3 + key_g1*g3 + key_G1*G3 + key_a1*a3 + key_A1*A3 + key_b1*b3
	            + key_c2*c4 + key_C2*C4 + key_d2*d4 + key_D2*D4 + key_e2*e4 + key_f2*f4 + key_F2*F4 + key_g2*g4 + key_G2*G4 + key_a2*a4 + key_A2*A4 + key_b2*b4
	            + key_c3*c5 + key_C3*C5 + key_d3*d5 + key_D3*D5 + key_e3*e5 + key_f3*f5 + key_F3*F5 + key_g3*g5 + key_G3*G5 + key_a3*a5 + key_A3*A5 + key_b3*b5
	            + key_c4*c6 + key_C4*C6 + key_d4*d6 + key_D4*D6 + key_e4*e6 + key_f4*f6 + key_F4*F6 + key_g4*g6 + key_G4*G6 + key_a4*a6 + key_A4*A6 + key_b4*b6
		    + key_c5*c7;

	bus_8_all = bass_keys_8_all * (1.0 - bass_engaged)
                                             + f3 + F3 + g3 + G3 + a3 + A3 + b3
	            + c4 + C4 + d4 + D4 + e4 + f4 + F4 + g4 + G4 + a4 + A4 + b4
	            + c5 + C5 + d5 + D5 + e5 + f5 + F5 + g5 + G5 + a5 + A5 + b5
	            + c6 + C6 + d6 + D6 + e6 + f6 + F6 + g6 + G6 + a6 + A6 + b6
		    + c7;

	bus_8_bleed = bus_8_all - bus_8 : bus_bleed_filter : apply_realism;

	// ******** BUS 16

	// compensate for the different impedance on the 16' bus bar compared to other bus bars by adding 4.5dB of gain
	bus_16    = bass_keys_16 * (1.0 - bass_engaged)                         + key_f1*f2 + key_F1*F2 + key_g1*g2 + key_G1*G2 + key_a1*a2 + key_A1*A2 + key_b1*b2
	            + key_c2*c3 + key_C2*C3 + key_d2*d3 + key_D2*D3 + key_e2*e3 + key_f2*f3 + key_F2*F3 + key_g2*g3 + key_G2*G3 + key_a2*a3 + key_A2*A3 + key_b2*b3
	            + key_c3*c4 + key_C3*C4 + key_d3*d4 + key_D3*D4 + key_e3*e4 + key_f3*f4 + key_F3*F4 + key_g3*g4 + key_G3*G4 + key_a3*a4 + key_A3*A4 + key_b3*b4
	            + key_c4*c5 + key_C4*C5 + key_d4*d5 + key_D4*D5 + key_e4*e5 + key_f4*f5 + key_F4*F5 + key_g4*g5 + key_G4*G5 + key_a4*a5 + key_A4*A5 + key_b4*b5
		    + key_c5*c6 : *(1.679);

	bus_16_all= bass_keys_16_all * (1.0 - bass_engaged)
                                             + f2 + F2 + g2 + G2 + a2 + A2 + b2
	            + c3 + C3 + d3 + D3 + e3 + f3 + F3 + g3 + G3 + a3 + A3 + b3
	            + c4 + C4 + d4 + D4 + e4 + f4 + F4 + g4 + G4 + a4 + A4 + b4
	            + c5 + C5 + d5 + D5 + e5 + f5 + F5 + g5 + G5 + a5 + A5 + b5
		    + c6 : *(1.679);

	bus_16_bleed = bus_16_all - bus_16 : bus_bleed_filter : apply_realism;


	// No bleed for bass buses, as there is a low pass filter which would clean up most of the bleed anyway

	bass_bus_4  = bass_keys_4  * bass_engaged;
	bass_bus_8  = bass_keys_8  * bass_engaged;
	bass_bus_16 = bass_keys_16 * bass_engaged;

	// ********* BASS BUS 4

	bass_keys_4  = (key_c0*c3 + key_C0*C3 + key_d0*d3 + key_D0*D3 + key_e0*e3 + key_f0*f3 + key_F0*F3 + key_g0*g3 + key_G0*G3 + key_a0*a3 + key_A0*A3 + key_b0*b3
	              + key_c1*c4 + key_C1*C4 + key_d1*d4 + key_D1*D4 + key_e1*e4);
	bass_keys_4_all =(c3+C3 + d3 + D3 + e3 + f3 + F3 + g3 + G3 + a3 + A3 + b3
	              + c4 + C4 + d4 + D4 + e4);

	// ********* BASS BUS 8

	bass_keys_8  = (key_c0*c2 + key_C0*C2 + key_d0*d2 + key_D0*D2 + key_e0*e2 + key_f0*f2 + key_F0*F2 + key_g0*g2 + key_G0*G2 + key_a0*a2 + key_A0*A2 + key_b0*b2
	              + key_c1*c3 + key_C1*C3 + key_d1*d3 + key_D1*D3 + key_e1*e3);
	bass_keys_8_all=(c2+ C2 + d2 + D2 + e2 + f2 + F2 + g2 + G2 + a2 + A2 + b2
	              + c3 + C3 + d3 + D3 + e3);

	// ********* BASS BUS 16

	bass_keys_16 = (key_c0*c1 + key_C0*C1 + key_d0*d1 + key_D0*D1 + key_e0*e1 + key_f0*f1 + key_F0*F1 + key_g0*g1 + key_G0*G1 + key_a0*a1 + key_A0*A1 + key_b0*b1
	              + key_c1*c2 + key_C1*C2 + key_d1*d2 + key_D1*D2 + key_e1*e2);
	bass_keys_16_all=(c1+C1 + d1 + D1 + e1 + f1 + F1 + g1 + G1 + a1 + A1 + b1
	              + c2 + C2 + d2 + D2 + e2);

};

