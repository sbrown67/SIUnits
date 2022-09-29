// ----------------------------------------------------------------------
// <copyright file="Luminous.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#include "Luminous.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Luminous::Luminous(void)
{
	
}

Luminous::Luminous(double candela)
{
	Value = candela;
}

Luminous::~Luminous(void)
{
	cout << "Luminous Object is being deleted. Value = " << Value << endl;
}

