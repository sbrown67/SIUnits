// ----------------------------------------------------------------------
// <copyright file="AngularSpeed.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#include "AngularSpeed.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

AngularSpeed::AngularSpeed(void)
{
	
}

AngularSpeed::AngularSpeed(double radiansPerSecond)
{
	Value = radiansPerSecond;
}

AngularSpeed::~AngularSpeed(void)
{
	cout << "AngularSpeed Object is being deleted. Value = " << Value << endl;
}

