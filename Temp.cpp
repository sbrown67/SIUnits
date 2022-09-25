// ----------------------------------------------------------------------
// <copyright file="Temp.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Temp.h"
#include <iostream>

using namespace std;

Temp::Temp(void)
{
	
}

Temp::Temp(float value)
{
	Value = value;
}

Temp::~Temp(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

