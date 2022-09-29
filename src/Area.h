/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#ifndef AREA_H
#define AREA_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Area : BaseValue
	{

	public:
		Area();
		Area(double metersSquared);
		~Area();

		// SI Unit Get Functions - #Property
		UnitProp MetersSquared = UnitProp(this, 1);
		UnitProp KilometersSquared = UnitProp(this, .001);
		UnitProp CentimetersSquared = UnitProp(this, 100);
		UnitProp YardsSquared = UnitProp(this, 1.19599);
		UnitProp FeetSquared = UnitProp(this, 10.7639);
		UnitProp InchesSquared = UnitProp(this, 1550);
		UnitProp MilesSquared = UnitProp(this, 3.86102e-7);
		UnitProp NauticalMilesSquared = UnitProp(this, 2.91553e-7);

	};
}
#endif /* AREA_H */
