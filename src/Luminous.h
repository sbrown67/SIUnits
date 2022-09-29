/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#ifndef LUMINOUS_H
#define LUMINOUS_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Luminous : BaseValue
	{

	public:
		Luminous();
		Luminous(double candela);
		~Luminous();

		// SI Unit Get Functions - #Property
		UnitProp candela = UnitProp(this, 1);
		UnitProp intensity = UnitProp(this, 1);
		UnitProp lumens = UnitProp(this, 12.57);
		UnitProp watts_sqcm2 = UnitProp(this, 6830000);
		UnitProp candlepower = UnitProp(this, .981);

	};
}
#endif /* LUMINOUS_H */
