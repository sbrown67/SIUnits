// ----------------------------------------------------------------------
// <copyright file="Temperature.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Temperature.h"
#include <iostream>

using namespace std;

Temperature::Temperature(void)
{
	
}

Temperature::Temperature(float celsius)
{
	Value = celsius;
}

Temperature::~Temperature(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

