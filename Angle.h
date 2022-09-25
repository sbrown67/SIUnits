// ----------------------------------------------------------------------
// <copyright file="Angle.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "UnitProp.h"
#include "BaseValue.h"

class Angle : BaseValue
{

public:
	Angle();
	Angle(double radians);
	~Angle();

	// SI Unit Get Functions#Property
	UnitProp Radians = UnitProp(this, 1);
	UnitProp Degrees = UnitProp(this, 57.295779513082320876798154814105);
	UnitProp ArcSeconds = UnitProp(this, 206);

};
