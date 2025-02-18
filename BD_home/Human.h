#pragma once
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;
class Human
{
	char* name;
	char* lastname;
	int age;
public:
	Human() : name{ nullptr }, lastname{ nullptr }, age{ 0 } {};
	Human(const char* uname, const char* ulastname, int age);

	void setName(const char* uname);
	void setLastName(const char* ulastname);
	void setAge(int uage);

	const char* getName()const;
	const char* getLastName() const;
	int getAge() const;

	void generateRandomName();

	void PrintHuman() const;
};

