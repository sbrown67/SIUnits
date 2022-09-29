// ----------------------------------------------------------------------
// <copyright file="Acceleration.cpp" company="6D">
//     	Copyright 2022. All right reserved
//
//	SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
// 	SPDX-License-Identifier: GPL-3.0-or-later
// </copyright>
// ------------------------------------------------------------------------

#include "Acceleration.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Acceleration::Acceleration(void)
{
	
}

Acceleration::Acceleration(double metersPerSec2)
{
	Value = metersPerSec2;
}

Acceleration::~Acceleration(void)
{
	cout << "Acceleration Object is being deleted. Value = " << Value << endl;
}

