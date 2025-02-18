#pragma once
#include "Human.h"
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;
class Apartment
{
	Human* person;
	int num;
public:
	Apartment() : person{ nullptr }, num{ 0 } {};
	Apartment(int num);

	void PrintApartment()const;

};

