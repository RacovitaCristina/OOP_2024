#pragma once
#include "Car.h"
#include "Weather.h"

class BMW:public Car
{
public:

	BMW()
	{
		typeofcar = "BMW";
		fuel_capacity = 65;
		fuel_consumption = 20;
		average_speed[Weather::Rain] = 150;
		average_speed[Weather::Sunny] = 190;
		average_speed[Weather::Snow] = 115.2;

	}
	const char* returnTypeofcar()
	{
		return this->typeofcar;

	}
	void SetTypeofcar(const char* typeofcar)
	{
		this->typeofcar = typeofcar;

	}
};

