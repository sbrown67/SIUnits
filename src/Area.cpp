// ----------------------------------------------------------------------
// <copyright file="Area.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Area.h"
#include <iostream>

using namespace std;

Area::Area(void)
{
	
}

Area::Area(double meterssquared)
{
	Value = meterssquared;
}

Area::~Area(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

