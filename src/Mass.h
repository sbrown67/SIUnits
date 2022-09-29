// ----------------------------------------------------------------------
// <copyright file="Mass.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#ifndef MASS_H
#define MASS_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Mass : BaseValue
	{

	public:
		Mass();
		Mass(double kilogram);
		~Mass();

		// SI Unit Get Functions - #Property
		UnitProp Kilogram = UnitProp(this, 1);
		UnitProp Lbs = UnitProp(this, 2.20462);
		UnitProp Newton = UnitProp(this, 9.80665);
		UnitProp Grams = UnitProp(this, 1000);
		UnitProp Ounce = UnitProp(this, 35.274);
		UnitProp Milligram = UnitProp(this, 1000000);

	};
}
#endif /* MASS_H */
