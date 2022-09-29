/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#include "Angle.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Angle::Angle(void)
{
	
}

Angle::Angle(double radians)
{
	Value = radians;
}

Angle::~Angle(void)
{
	cout << "Angle Object is being deleted. Value = " << Value << endl;
}

