/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
*/

#ifndef ANGLE_H
#define ANGLE_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Angle : BaseValue
	{

	public:
		Angle();
		Angle(double radians);
		~Angle();

		// SI Unit Get Functions - #Property
		UnitProp Radians = UnitProp(this, 1);
		UnitProp Degrees = UnitProp(this, 57.295779513082320876798154814105);
		UnitProp ArcSeconds = UnitProp(this, 206);

	};
}
#endif /* ANGLE_H */
