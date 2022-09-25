// ----------------------------------------------------------------------
// <copyright file="Angle.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Angle.h"
#include <iostream>

using namespace std;

Angle::Angle(void)
{
	
}

Angle::Angle(double radians)
{
	Value = radians;
}

Angle::~Angle(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

