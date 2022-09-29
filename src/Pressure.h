/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#ifndef PRESSURE_H
#define PRESSURE_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Pressure : BaseValue
	{

	public:
		Pressure();
		Pressure(double pascal);
		~Pressure();

		// SI Unit Get Functions - #Property
		UnitProp Pascal = UnitProp(this, 1);
		UnitProp Bar = UnitProp(this, 1e-5);
		UnitProp Atmosphere = UnitProp(this, 1.0197e-5);
		UnitProp SAtmosphere = UnitProp(this, 9.8692e-6);
		UnitProp Torr = UnitProp(this, 7.5006e-3);
		UnitProp PSI = UnitProp(this, 1.45037738e-4);

	};
}
#endif /* PRESSURE_H */
