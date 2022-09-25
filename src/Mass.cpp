// ----------------------------------------------------------------------
// <copyright file="Mass.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Mass.h"
#include <iostream>

using namespace std;

Mass::Mass(void)
{
	
}

Mass::Mass(double kilogram)
{
	Value = kilogram;
}

Mass::~Mass(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

