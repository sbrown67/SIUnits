/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
*/

#ifndef FREQUENCY_H
#define FREQUENCY_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Frequency : BaseValue
	{

	public:
		Frequency();
		Frequency(double hz);
		~Frequency();

		// SI Unit Get Functions - #Property
		UnitProp Hz = UnitProp(this, 1);
		UnitProp kHz = UnitProp(this, .001);
		UnitProp MHz = UnitProp(this, .000001);
		UnitProp GHz = UnitProp(this, .000000001);

	};
}
#endif /* FREQUENCY_H */
