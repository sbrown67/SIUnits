// ----------------------------------------------------------------------
// <copyright file="Moment.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#ifndef MOMENT_H
#define MOMENT_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Moment : BaseValue
	{

	public:
		Moment();
		Moment(double foot_pounds);
		~Moment();

		// SI Unit Get Functions - #Property
		UnitProp Foot_pounds = UnitProp(this, 1);
		UnitProp Inch_pounds = UnitProp(this, 0.08333333355902778);
		UnitProp Inch_ounces = UnitProp(this, 0.005208333347439236);
		UnitProp Newton_meters = UnitProp(this, 0.7375621483695506);
		UnitProp Kilogram_force_meter = UnitProp(this, 0.1382549544);

	};
}
#endif /* MOMENT_H */
