// ----------------------------------------------------------------------
// <copyright file="Moment.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "Moment.h"
#include <iostream>

using namespace std;

Moment::Moment(void)
{
	
}

Moment::Moment(double foot_pounds)
{
	Value = foot_pounds;
}

Moment::~Moment(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

