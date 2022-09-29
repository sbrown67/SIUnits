// ----------------------------------------------------------------------
// <copyright file="Speed.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#ifndef SPEED_H
#define SPEED_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Speed : BaseValue
	{

	public:
		Speed();
		Speed(double mps);
		~Speed();

		// SI Unit Get Functions - #Property
		UnitProp Mps = UnitProp(this, 1);
		UnitProp Mph = UnitProp(this, 2.23694);
		UnitProp Fps = UnitProp(this, 3.28084);
		UnitProp NMph = UnitProp(this, 1.94384);

	};
}
#endif /* SPEED_H */
