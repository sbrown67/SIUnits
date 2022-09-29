// ----------------------------------------------------------------------
// <copyright file="Length.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

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

