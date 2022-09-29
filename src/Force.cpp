/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
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

