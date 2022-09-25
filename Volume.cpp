// ----------------------------------------------------------------------
// <copyright file="Volume.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Volume.h"
#include <iostream>

using namespace std;

Volume::Volume(void)
{
	
}

Volume::Volume(double meterscubed)
{
	Value = meterscubed;
}

Volume::~Volume(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

