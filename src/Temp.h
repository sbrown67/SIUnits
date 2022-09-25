// ----------------------------------------------------------------------
// <copyright file="Temp.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "UnitPropLTF.h"
#include "BaseValuef.h"

class Temp : BaseValuef
{

public:
	Temp();
	Temp(float value);
	~Temp();

	// SI Unit Get Functions#Property
	UnitPropLTF Celsius = UnitPropLTF(this, 1, 0);
	UnitPropLTF Fahrenheit = UnitPropLTF(this, 1.8, 32);
	UnitPropLTF Rankine = UnitPropLTF(this, 1.8, 491.67);
	UnitPropLTF Kelvin = UnitPropLTF(this, 1, 273.15  );

};
