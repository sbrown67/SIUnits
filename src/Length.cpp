// ----------------------------------------------------------------------
// <copyright file="Length.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Length.h"
#include <iostream>

using namespace std;

Length::Length(void)
{
	
}

Length::Length(double meters)
{
	_value = meters;
	//Meters = meters;
}

Length::~Length(void)
{
	//cout << "Length Object is being deleted. Value = " << Value << endl;
}

