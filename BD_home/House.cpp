#include "House.h"
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

House::House(int num )
{
	this->num = num;
	apartments = new Apartment[num];
	for(int i = 0; i < num; i++)
	{
		apartments[i] = Apartment(rand() % 3);
	}
}

void House::PrintHouse() const
{
	cout << "����� ����" << endl;
	for(int i = 0; i < num; i++)
	{
		cout << "����� �������� �" << i << endl;
		apartments[i].PrintApartment();
	}
}
