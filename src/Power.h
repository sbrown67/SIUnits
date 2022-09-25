// ----------------------------------------------------------------------
// <copyright file="Power.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "UnitProp.h"
#include "BaseValue.h"

class Power : BaseValue
{

public:
	Power();
	Power(double horsepower);
	~Power();

	// SI Unit Get Functions#Property
	UnitProp HorsePower = UnitProp(this, 1);
	UnitProp Watts = UnitProp(this, 745.7);
	UnitProp ft_lbsPerSec = UnitProp(this, 550.0);
	UnitProp m_kgPerSec = UnitProp(this, 75.0);

};
