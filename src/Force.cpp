// ----------------------------------------------------------------------
// <copyright file="Force.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#include "Force.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Force::Force(void)
{
	
}

Force::Force(float lbs)
{
	Value = lbs;
}

Force::~Force(void)
{
	cout << "Force Object is being deleted. Value = " << Value << endl;
}

