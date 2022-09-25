// ----------------------------------------------------------------------
// <copyright file="AngularSpeed.cpp" company="6D">
//     Copyright 2022. All right reserved
// </copyright>
// ------------------------------------------------------------------------

#pragma once
#include "AngularSpeed.h"
#include <iostream>

using namespace std;

AngularSpeed::AngularSpeed(void)
{
	
}

AngularSpeed::AngularSpeed(double radianspersecond)
{
	Value = radianspersecond;
}

AngularSpeed::~AngularSpeed(void)
{
	cout << "Length Object is being deleted. Value = " << Value << endl;
}

