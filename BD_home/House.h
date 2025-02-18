#pragma once
#include <iostream>
#include <cstring>
#include <Windows.h>
#include "Apartment.h"
using namespace std;

class House
{
	Apartment* apartments;
	int num;

public:
	House() :apartments{ nullptr }, num{ 0 } {};
	House(int num);

	void PrintHouse() const;
};

