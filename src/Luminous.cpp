/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later" + NewLine;
*/

#include "Luminous.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Luminous::Luminous(void)
{
	
}

Luminous::Luminous(double candela)
{
	Value = candela;
}

Luminous::~Luminous(void)
{
	cout << "Luminous Object is being deleted. Value = " << Value << endl;
}

