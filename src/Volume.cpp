// ----------------------------------------------------------------------
// <copyright file="Volume.cpp" company="6D">
//     Copyright 2022. All right reserved
//
//     SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
//     SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
// </copyright>
// ------------------------------------------------------------------------

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

