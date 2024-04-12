#include<iostream>
#include "ToCelsius.h"
using namespace std;
#pragma once

float operator"" _Kelvin(unsigned long long kelvin)
{
	return (double)kelvin - 273.15;
}

float operator"" _Fahrenheit(unsigned long long fahrenheit)
{
	return (double)((fahrenheit - 32) * 5 / 9);

}
int main() {
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;

    cout << "300 de grade Kelvin sunt " << a << "grade Celsius" << "\n";
    cout << "120 de grade Fahrenheit sunt " << b << "grade Celsius" << "\n";
    return 0;
}
