/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#ifndef LENGTH_H
#define LENGTH_H

#include "UnitProp.h"
#include "BaseValue.h"

namespace SIUnits
{
	class Length : BaseValue
	{

	public:
		Length();
		Length(double meters);
		~Length();

		// SI Unit Get Functions - #Property
		UnitProp Meters = UnitProp(this, 1);
		UnitProp Feet = UnitProp(this, 3.2808398950131233595800524934383);
		UnitProp Inches = UnitProp(this, 39.37007874015748031496062992126);
		UnitProp Miles = UnitProp(this, .00062137119223733396961743418436331);
		UnitProp NauticalMiles = UnitProp(this, .00053996706632869048051021272110571);
		UnitProp Yards = UnitProp(this, 1.0936132983377077865266841644794);
		UnitProp Centimeters = UnitProp(this, 100.0);
		UnitProp Kilometers = UnitProp(this, 0.001);

	};
}
#endif /* LENGTH_H */
