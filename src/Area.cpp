// ----------------------------------------------------------------------
// <copyright file="Area.cpp" company="6D">
//     Copyright 2022. All right reserved
//
//     SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
//     SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
// </copyright>
// ------------------------------------------------------------------------

#include "Area.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Area::Area(void)
{
	
}

Area::Area(double metersSquared)
{
	Value = metersSquared;
}

Area::~Area(void)
{
	cout << "Area Object is being deleted. Value = " << Value << endl;
}

