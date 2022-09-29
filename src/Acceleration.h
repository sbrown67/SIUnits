// ----------------------------------------------------------------------
// <copyright file="Acceleration.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#ifndef ACCELERATION_H
#define ACCELERATION_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Acceleration : BaseValue
	{

	public:
		Acceleration();
		Acceleration(double metersPerSec2);
		~Acceleration();

		// SI Unit Get Functions - #Property
		UnitProp MetersPerSec2 = UnitProp(this, 1);
		UnitProp FeetPerSec2 = UnitProp(this, 3.2808398950131233595800524934383);

	};
}
#endif /* ACCELERATION_H */
