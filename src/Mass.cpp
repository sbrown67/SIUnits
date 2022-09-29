// ----------------------------------------------------------------------
// <copyright file="Mass.cpp" company="6D">
//     Copyright 2022. All right reserved
//
//     SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
//     SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
// </copyright>
// ------------------------------------------------------------------------

#include "Mass.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Mass::Mass(void)
{
	
}

Mass::Mass(double kilogram)
{
	Value = kilogram;
}

Mass::~Mass(void)
{
	cout << "Mass Object is being deleted. Value = " << Value << endl;
}

