// ----------------------------------------------------------------------
// <copyright file="Force.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "UnitProp.h"
#include "BaseValue.h"

class Force : BaseValue
{

public:
	Force();
	Force(float lbs);
	~Force();

	// SI Unit Get Functions#Property
	UnitProp Lbs = UnitProp(this, 1.0);
	UnitProp Newtons = UnitProp(this, 4.448222);
	UnitProp Kilopond = UnitProp(this, 9.80665);
	UnitProp SlugsFeetPerSecondSquard = UnitProp(this, 1.0);

};
