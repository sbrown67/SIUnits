/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
*/

#include "Volume.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Volume::Volume(void)
{
	
}

Volume::Volume(double metersCubed)
{
	Value = metersCubed;
}

Volume::~Volume(void)
{
	cout << "Volume Object is being deleted. Value = " << Value << endl;
}

