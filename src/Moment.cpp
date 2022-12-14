/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
*/

#include "Moment.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Moment::Moment(void)
{
	
}

Moment::Moment(double foot_pounds)
{
	Value = foot_pounds;
}

Moment::~Moment(void)
{
	cout << "Moment Object is being deleted. Value = " << Value << endl;
}

