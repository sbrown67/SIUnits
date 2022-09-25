// ----------------------------------------------------------------------
// <copyright file="Pressure.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "UnitProp.h"
#include "BaseValue.h"

class Pressure : BaseValue
{

public:
	Pressure();
	Pressure(double pascal);
	~Pressure();

	// SI Unit Get Functions#Property
	UnitProp Pascal = UnitProp(this, 1);
	UnitProp Bar = UnitProp(this, 1e-5);
	UnitProp Atmosphere = UnitProp(this, 1.0197e-5);
	UnitProp SAtmosphere = UnitProp(this, 9.8692e-6);
	UnitProp Torr = UnitProp(this, 7.5006e-3);
	UnitProp PSI = UnitProp(this, 1.45037738e-4);

};
