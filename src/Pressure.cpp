/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
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

