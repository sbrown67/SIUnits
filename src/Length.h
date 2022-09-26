// ----------------------------------------------------------------------
// <copyright file="Length.h" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "UnitProp.h"
#include "BaseValue.h"

class Length : BaseValue
{
	//double _value;
public:
	Length();
	Length(double meters);
	~Length();

	//double Meters;
	// SI Unit Get Functions#Property
	UnitProp Meters = UnitProp(this, 1);
	UnitProp Feet = UnitProp(this, 3.2808398950131233595800524934383);
	UnitProp Inches = UnitProp(this, 39.37007874015748031496062992126);
	UnitProp Miles = UnitProp(this, .00062137119223733396961743418436331);
	UnitProp NauticalMiles = UnitProp(this, .00053996706632869048051021272110571);
	UnitProp Yards = UnitProp(this, 1.0936132983377077865266841644794);
	UnitProp Centimeters = UnitProp(this, 100.0);
	UnitProp Kilometers = UnitProp(this, 0.001);

};