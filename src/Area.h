// ----------------------------------------------------------------------
// <copyright file="Area.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "UnitProp.h"
#include "BaseValue.h"

class Area : BaseValue
{

public:
	Area();
	Area(double meterssquared);
	~Area();

	// SI Unit Get Functions#Property
	UnitProp MetersSquared = UnitProp(this, 1);
	UnitProp KilometersSquared = UnitProp(this, .001);
	UnitProp CentimetersSquared = UnitProp(this, 100);
	UnitProp YardsSquared = UnitProp(this, 1.19599);
	UnitProp FeetSquared = UnitProp(this, 10.7639);
	UnitProp InchesSquared = UnitProp(this, 1550);
	UnitProp MilesSquared = UnitProp(this, 3.86102e-7);
	UnitProp NauticalMilesSquared = UnitProp(this, 2.91553e-7);

};
