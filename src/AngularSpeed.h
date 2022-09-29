// ----------------------------------------------------------------------
// <copyright file="AngularSpeed.h" company="6D">
//     Copyright 2022. All right reserved
//
//     SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
//     SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
// </copyright>
// ------------------------------------------------------------------------

#ifndef ANGULARSPEED_H
#define ANGULARSPEED_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class AngularSpeed : BaseValue
	{

	public:
		AngularSpeed();
		AngularSpeed(double radiansPerSecond);
		~AngularSpeed();

		// SI Unit Get Functions - #Property
		UnitProp RadiansPerSecond = UnitProp(this, 1);
		UnitProp DegreesPerSecond = UnitProp(this, 57.295779513082320876798154814105);
		UnitProp RevolutionPerSecond = UnitProp(this, 0.15915494309189533576888376337251);
		UnitProp RevolutionPerMinute = UnitProp(this, 9.5492965855137201461330258023506);
		UnitProp RevolutionPerHour = UnitProp(this, 572.95779513082320876798154814105);
		UnitProp Hertz = UnitProp(this, 0.15915494309189533576888376337251);

	};
}
#endif /* ANGULARSPEED_H */
