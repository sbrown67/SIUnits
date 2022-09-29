// ----------------------------------------------------------------------
// <copyright file="Temperature.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#include "Temperature.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Temperature::Temperature(void)
{
	
}

Temperature::Temperature(float celsius)
{
	Value = celsius;
}

Temperature::~Temperature(void)
{
	cout << "Temperature Object is being deleted. Value = " << Value << endl;
}

