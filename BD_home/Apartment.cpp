#include "Apartment.h"
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

Apartment::Apartment(int num ) : person{ new Human[num] }, num{ num }
{

	for (int i = 0; i < num; i++)
	{
		person[i].generateRandomName();
	}
}

void Apartment::PrintApartment() const
{
	cout << "Кол-во жильцов " << num << endl << endl;
	for (int i = 0; i < num; i++)
	{
		person[i].PrintHuman();
	}
}
