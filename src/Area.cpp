// ----------------------------------------------------------------------
// <copyright file="Area.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#include "Area.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Area::Area(void)
{
	
}

Area::Area(double metersSquared)
{
	Value = metersSquared;
}

Area::~Area(void)
{
	cout << "Area Object is being deleted. Value = " << Value << endl;
}

