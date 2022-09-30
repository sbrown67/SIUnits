/*
* SPDX-FileCopyrightText: 2022 6th Dimension, Inc. <info@6thdpro.com>
*
* SPDX-License-Identifier: GPL-3.0-or-later
*/

// CppTestApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Length.h"
//#include "TemplateUtils.h"
#include "Speed.h"
#include "Temperature.h"
#include "Force.h"
#include "Power.h"
#include "Mass.h"
#include "Volume.h"

using namespace std;
using namespace SIUnits;

int main()
{
    std::cout << "Hello World!\n";
    //std::cout << "Hello World2!\n";
    //std::cout << "Hello World3!\n";
    
    Length length = Length(1000);
    double m = length.Meters;
    cout << "Meters " << length.Meters << '\n';
    cout << "Feet " << length.Feet << '\n';
    cout << "NauticalMiles " << length.NauticalMiles << '\n';

    Speed speed = Speed(20);
    double fps = speed.Fps;
    cout << "Fps " << speed.Fps << '\n';
    cout << "Mps " << speed.Mps << '\n';

    Force force = Force(50);
    cout << "Kilopond " << force.Kilopond << '\n';
    cout << "Newtons " << force.Newtons << '\n';
    cout << "Lbs " << force.Lbs << '\n';

    Power power = Power(10);
    cout << "ft_lbsPerSec " << power.ft_lbsPerSec << '\n';
    cout << "HorsePower " << power.HorsePower << '\n';
    
    Temperature temp = Temperature(5);
    temp.Fahrenheit = 51;
    cout << "Kelvin " << temp.Kelvin << '\n';
    cout << "Fahrenheit " << temp.Fahrenheit << '\n';
    cout << "Rankine " << temp.Rankine << '\n';
    cout << "Celsius " << temp.Celsius << '\n';
    
    Mass mass = Mass(1);
    cout << "Lbs " << mass.Lbs << '\n';
    cout << "Newton " << mass.Newton << '\n';
    cout << "Slug " << mass.Slug << '\n';
    
    Volume vol = Volume(100);
    cout << "KilometersCubed " << vol.KilometersCubed << '\n';
    cout << "MetersCubed " << vol.MetersCubed << '\n';

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
