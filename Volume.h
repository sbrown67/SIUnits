// ----------------------------------------------------------------------
// <copyright file="Volume.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "UnitProp.h"
#include "BaseValue.h"

class Volume : BaseValue
{

public:
	Volume();
	Volume(double meterscubed);
	~Volume();

	// SI Unit Get Functions#Property
	UnitProp MetersCubed = UnitProp(this, 1);
	UnitProp FeetCubed = UnitProp(this, 35.3147);
	UnitProp KilometersCubed = UnitProp(this, 1e-9);
	UnitProp YardsCubed = UnitProp(this, 1.30795);
	UnitProp CentimetersCubed = UnitProp(this, 1000000);
	UnitProp InchesCubed = UnitProp(this, 61023.7);
	UnitProp MilesCubed = UnitProp(this, 2.39913e-10);
	UnitProp NauticalMilesCubed = UnitProp(this, 1.57426e-10);

};
