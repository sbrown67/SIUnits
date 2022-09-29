// ----------------------------------------------------------------------
// <copyright file="Pressure.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#include "Pressure.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Pressure::Pressure(void)
{
	
}

Pressure::Pressure(double pascal)
{
	Value = pascal;
}

Pressure::~Pressure(void)
{
	cout << "Pressure Object is being deleted. Value = " << Value << endl;
}

