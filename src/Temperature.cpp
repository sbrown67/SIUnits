/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#include "Temperature.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Temperature::Temperature(void)
{
	
}

Temperature::Temperature(float celsius)
{
	Value = celsius;
}

Temperature::~Temperature(void)
{
	cout << "Temperature Object is being deleted. Value = " << Value << endl;
}

