// ----------------------------------------------------------------------
// <copyright file="Power.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Power.h"
#include <iostream>

using namespace std;

Power::Power(void)
{
	
}

Power::Power(double horsepower)
{
	Value = horsepower;
}

Power::~Power(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

