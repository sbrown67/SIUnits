// ----------------------------------------------------------------------
// <copyright file="Pressure.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#include "Pressure.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Pressure::Pressure(void)
{
	
}

Pressure::Pressure(double pascal)
{
	Value = pascal;
}

Pressure::~Pressure(void)
{
	cout << "Pressure Object is being deleted. Value = " << Value << endl;
}

