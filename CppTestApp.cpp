// CppTestApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Length.h"
#include "TemplateUtils.h"
#include "Speed.h"
#include "Temperature.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    Length length = Length(1000);
    double m = length.Meters;
    double ft = length.Feet;
    double mi = length.Miles;

    length.Kilometers = 10;
    double km = length.Kilometers;
    double in = length.Inches;
    double cm = length.Centimeters;

    Speed speed = Speed(20);
    double fps = speed.Fps;
    //length.Centimeters = 10;

    Temperature temp = Temperature(5);
    temp.Fahrenheit = 51;
    float cel = temp.Celsius;
    float fah = temp.Fahrenheit;
    float rank = temp.Rankine;
    float kel = temp.Kelvin;
    cout << "Kelvin " << temp.Kelvin << '\n';
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
