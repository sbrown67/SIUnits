/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#include "Speed.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Speed::Speed(void)
{
	
}

Speed::Speed(double mps)
{
	Value = mps;
}

Speed::~Speed(void)
{
	cout << "Speed Object is being deleted. Value = " << Value << endl;
}

