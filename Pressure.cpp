// ----------------------------------------------------------------------
// <copyright file="Pressure.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Pressure.h"
#include <iostream>

using namespace std;

Pressure::Pressure(void)
{
	
}

Pressure::Pressure(double pascal)
{
	Value = pascal;
}

Pressure::~Pressure(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

