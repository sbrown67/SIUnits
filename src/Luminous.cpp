// ----------------------------------------------------------------------
// <copyright file="Luminous.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Luminous.h"
#include <iostream>

using namespace std;

Luminous::Luminous(void)
{
	
}

Luminous::Luminous(double candela)
{
	Value = candela;
}

Luminous::~Luminous(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

