/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2012 University of British Columbia, Vancouver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Alexander Schloegl <alexander.schloegl@gmx.de>
 */

#ifndef PLC_DCMC_CAPACITIES_H_
#define PLC_DCMC_CAPACITIES_H_

#include <ns3/spectrum-value.h>

namespace ns3 {

/*
 * Mutual information in bits/channel use for equally probable input symbols on a discrete input continuous output memoryless channel (DCMC)
 * with additive white gaussian noise for SNR (Es/N0) range [-10:1:40]dB
 */

enum Modulation
{
	QAM,
	PSK
};

// QAM signal constellations
static const double qamCap[6][51] = {
		// BPSK
		{0.13142,0.16177,0.19814,0.24123,0.29159,0.34951,0.41482,0.48671,0.56359,0.643,0.72154,0.79505,0.85953,0.91242,0.95138,0.97584,0.99032,0.99687,0.99914,0.99987,0.99998,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		// 4-QAM
		{0.13142,0.16177,0.19814,0.24123,0.29159,0.34951,0.41482,0.48671,0.56359,0.643,0.72154,0.79505,0.85953,0.91242,0.95138,0.97584,0.99032,0.99687,0.99914,0.99987,0.99998,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		// 8-QAM
		{0.13749,0.17104,0.21218,0.26232,0.32297,0.39572,0.48204,0.58321,0.70009,0.83287,0.98089,1.1425,1.3149,1.4948,1.6784,1.862,2.0428,2.2181,2.3851,2.54,2.6774,2.7916,2.8787,2.9379,2.9729,2.9904,2.9973,2.9995,2.9999,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3},
		// 16-QAM
		{0.1375,0.17105,0.2122,0.26237,0.3231,0.396,0.48263,0.58443,0.70252,0.83759,0.98974,1.1585,1.3427,1.541,1.7517,1.9732,2.2036,2.4413,2.6837,2.927,3.1642,3.3851,3.5786,3.7373,3.8542,3.9275,3.9709,3.9906,3.9974,3.9996,3.9999,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
		// 32-QAM
		{0.1375,0.17106,0.21221,0.26239,0.32315,0.39609,0.48282,0.58481,0.70327,0.83899,0.99228,1.1628,1.3499,1.5523,1.7687,1.9975,2.2372,2.4864,2.7438,3.0079,3.277,3.549,3.8199,4.0827,4.3263,4.5389,4.7128,4.8406,4.9208,4.9682,4.9897,4.9972,4.9996,4.9999,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
		// 64-QAM
		{0.1375,0.17105,0.21221,0.26239,0.32314,0.39607,0.48278,0.58474,0.70313,0.83872,0.99177,1.162,1.3484,1.55,1.7652,1.9926,2.2308,2.4786,2.7349,2.9985,3.2686,3.5442,3.8246,4.1087,4.3953,4.6815,4.9616,5.2251,5.4592,5.6544,5.8029,5.8993,5.9569,5.9858,5.9957,5.9993,5.9999,6,6,6,6,6,6,6,6,6,6,6,6,6,6}
};

// PSK signal constellations
static const double pskCap[3][51] = {
		// 16-PSK
		{0.13749,0.17104,0.21218,0.26232,0.32297,0.39572,0.48204,0.58321,0.70009,0.83287,0.98089,1.1425,1.315,1.4949,1.6787,1.8629,2.0452,2.2245,2.4007,2.5743,2.7459,2.9161,3.0848,3.2509,3.4118,3.5624,3.696,3.8063,3.8893,3.9444,3.9764,3.992,3.9978,3.9996,3.9999,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
		// 32-PSK
		{0.13749,0.17104,0.21218,0.26232,0.32298,0.39572,0.48204,0.58321,0.70009,0.83287,0.98089,1.1425,1.315,1.4949,1.6787,1.8629,2.0452,2.2245,2.4007,2.5743,2.746,2.9163,3.0857,3.2543,3.4224,3.59,3.7573,3.9243,4.0907,4.2554,4.4155,4.5655,4.6986,4.8083,4.8908,4.9453,4.9769,4.9922,4.9979,4.9996,4.9999,5,5,5,5,5,5,5,5,5,5},
		// 64-PSK
		{0.13749,0.17104,0.21218,0.26232,0.32298,0.39572,0.48204,0.58321,0.70009,0.83287,0.98089,1.1425,1.315,1.4949,1.6787,1.8629,2.0452,2.2245,2.4007,2.5743,2.746,2.9163,3.0857,3.2543,3.4224,3.59,3.7573,3.9244,4.0912,4.2579,4.4245,4.591,4.7574,4.9237,5.0896,5.254,5.4139,5.5641,5.6973,5.8074,5.8901,5.9449,5.9766,5.9921,5.9978,5.9996,5.9999,6,6,6,6}
};

SpectrumValue GetCapacity(const SpectrumValue& SINR, Modulation mod, short cardinality);

} // namespace ns3

#endif /* PLC_DCMC_CAPACITIES_H_ */
