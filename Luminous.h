// ----------------------------------------------------------------------
// <copyright file="Luminous.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "UnitProp.h"
#include "BaseValue.h"

class Luminous : BaseValue
{

public:
	Luminous();
	Luminous(double candela);
	~Luminous();

	// SI Unit Get Functions#Property
	UnitProp candela = UnitProp(this, 1);
	UnitProp intensity = UnitProp(this, 1);
	UnitProp lumens = UnitProp(this, 12.57);
	UnitProp watts_sqcm2 = UnitProp(this, 6830000);
	UnitProp candlepower = UnitProp(this, .981);

};
