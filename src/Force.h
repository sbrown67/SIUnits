/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
*/

#ifndef FORCE_H
#define FORCE_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Force : BaseValue
	{

	public:
		Force();
		Force(float lbs);
		~Force();

		// SI Unit Get Functions - #Property
		UnitProp Lbs = UnitProp(this, 1.0);
		UnitProp Newtons = UnitProp(this, 4.448222);
		UnitProp Kilopond = UnitProp(this, 9.80665);
		UnitProp SlugsFeetPerSecondSquard = UnitProp(this, 1.0);

	};
}
#endif /* FORCE_H */
