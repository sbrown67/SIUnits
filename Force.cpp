// ----------------------------------------------------------------------
// <copyright file="Force.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Force.h"
#include <iostream>

using namespace std;

Force::Force(void)
{
	
}

Force::Force(float lbs)
{
	Value = lbs;
}

Force::~Force(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

