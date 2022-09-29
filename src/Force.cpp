// ----------------------------------------------------------------------
// <copyright file="Force.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#include "Force.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Force::Force(void)
{
	
}

Force::Force(float lbs)
{
	Value = lbs;
}

Force::~Force(void)
{
	cout << "Force Object is being deleted. Value = " << Value << endl;
}

