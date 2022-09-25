// ----------------------------------------------------------------------
// <copyright file="Frequency.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Frequency.h"
#include <iostream>

using namespace std;

Frequency::Frequency(void)
{
	
}

Frequency::Frequency(double hz)
{
	Value = hz;
}

Frequency::~Frequency(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

