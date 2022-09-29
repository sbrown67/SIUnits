/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
*/

#include "Frequency.h"
#include <iostream>

using namespace std;
using namespace SIUnits;

Frequency::Frequency(void)
{
	
}

Frequency::Frequency(double hz)
{
	Value = hz;
}

Frequency::~Frequency(void)
{
	cout << "Frequency Object is being deleted. Value = " << Value << endl;
}

