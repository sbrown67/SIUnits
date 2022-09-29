// ----------------------------------------------------------------------
// <copyright file="Power.cpp" company="6D">
//     Copyright 2022. All right reserved
//
//     SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
//     SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
// </copyright>
// ------------------------------------------------------------------------

#include "Power.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Power::Power(void)
{
	
}

Power::Power(double horsePower)
{
	Value = horsePower;
}

Power::~Power(void)
{
	cout << "Power Object is being deleted. Value = " << Value << endl;
}

