// ----------------------------------------------------------------------
// <copyright file="Speed.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Speed.h"
#include <iostream>

using namespace std;

Speed::Speed(void)
{
	
}

Speed::Speed(double mps)
{
	Value = mps;
}

Speed::~Speed(void)
{
	//cout << "Length Object is being deleted. Value = " << Value << endl;
}

