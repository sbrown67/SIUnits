// ----------------------------------------------------------------------
// <copyright file="Temperature.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "UnitPropLTF.h"
#include "BaseValuef.h"

class Temperature : BaseValuef
{

public:
	Temperature();
	Temperature(float celsius);
	~Temperature();

	// SI Unit Get Functions#Property
	UnitPropLTF Celsius = UnitPropLTF(this, 1.0f, 0.0f);
	UnitPropLTF Fahrenheit = UnitPropLTF(this, 1.8f, 32.0f);
	UnitPropLTF Rankine = UnitPropLTF(this, 1.8f, 491.67f);
	UnitPropLTF Kelvin = UnitPropLTF(this, 1.0f, 273.15f  );

};