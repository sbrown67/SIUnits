/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#ifndef VOLUME_H
#define VOLUME_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Volume : BaseValue
	{

	public:
		Volume();
		Volume(double metersCubed);
		~Volume();

		// SI Unit Get Functions - #Property
		UnitProp MetersCubed = UnitProp(this, 1);
		UnitProp FeetCubed = UnitProp(this, 35.3147);
		UnitProp KilometersCubed = UnitProp(this, 1e-9);
		UnitProp YardsCubed = UnitProp(this, 1.30795);
		UnitProp CentimetersCubed = UnitProp(this, 1000000);
		UnitProp InchesCubed = UnitProp(this, 61023.7);
		UnitProp MilesCubed = UnitProp(this, 2.39913e-10);
		UnitProp NauticalMilesCubed = UnitProp(this, 1.57426e-10);

	};
}
#endif /* VOLUME_H */
