// ----------------------------------------------------------------------
// <copyright file="Power.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#include "Power.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Power::Power(void)
{
	
}

Power::Power(double horsePower)
{
	Value = horsePower;
}

Power::~Power(void)
{
	cout << "Power Object is being deleted. Value = " << Value << endl;
}

