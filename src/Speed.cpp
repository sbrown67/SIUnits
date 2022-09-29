// ----------------------------------------------------------------------
// <copyright file="Speed.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#include "Speed.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Speed::Speed(void)
{
	
}

Speed::Speed(double mps)
{
	Value = mps;
}

Speed::~Speed(void)
{
	cout << "Speed Object is being deleted. Value = " << Value << endl;
}

