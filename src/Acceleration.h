/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
*/

#ifndef ACCELERATION_H
#define ACCELERATION_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Acceleration : BaseValue
	{

	public:
		Acceleration();
		Acceleration(double metersPerSec2);
		~Acceleration();

		// SI Unit Get Functions - #Property
		UnitProp MetersPerSec2 = UnitProp(this, 1);
		UnitProp FeetPerSec2 = UnitProp(this, 3.2808398950131233595800524934383);

	};
}
#endif /* ACCELERATION_H */
