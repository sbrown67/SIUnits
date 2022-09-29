// ----------------------------------------------------------------------
// <copyright file="Frequency.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#include "Frequency.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Frequency::Frequency(void)
{
	
}

Frequency::Frequency(double hz)
{
	Value = hz;
}

Frequency::~Frequency(void)
{
	cout << "Frequency Object is being deleted. Value = " << Value << endl;
}

