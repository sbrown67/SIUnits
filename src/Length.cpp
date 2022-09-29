/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#include "Length.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Length::Length(void)
{
	
}

Length::Length(double meters)
{
	Value = meters;
}

Length::~Length(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

