#include "Human.h"
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;

Human::Human(const char* uname, const char* ulastname, int age)
{
    this->age = age;
    name = new char[strlen(uname) + 1];
    strcpy_s(name, strlen(uname) + 1, uname);

    lastname = new char[strlen(ulastname) + 1];
    strcpy_s(lastname, strlen(ulastname) + 1, ulastname);
}

void Human::setName(const char* uname)
{
    delete[]name;
    name = new char[strlen(uname) + 1];
    strcpy_s(name, strlen(uname) + 1, uname);
}

void Human::setLastName(const char* ulastname)
{
    delete[]lastname;
    lastname = new char[strlen(ulastname) + 1];
    strcpy_s(lastname, strlen(ulastname) + 1, ulastname);
}

void Human::setAge(int age)
{
    this->age = age;
}

const char* Human::getName() const
{
    return name ? name : "Name";
}

const char* Human::getLastName() const
{
    return lastname ? lastname : "LastName";
}

int Human::getAge() const
{
    return age;
}

void Human::generateRandomName()
{
    const char* names[] = { "John", "Jane", "Alice", "Bob", "Charlie", "Diana" };
    const char* lastnames[] = { "Doe", "Smith", "Johnson", "Brown", "Williams", "Jones" };

    int randName = rand() % (sizeof(names) / sizeof(names[0]));
    int randLastName = rand() % (sizeof(lastnames) / sizeof(lastnames[0]));
    int randAge = rand() % 100;

    setName(names[randName]);
    setLastName(lastnames[randLastName]);
    setAge(randAge);
}

void Human::PrintHuman() const
{
    cout << "\tName: " << getName() << endl;
    cout << "\tLast Name: " << getLastName() << endl;
    cout << "\tAge: " << getAge() << endl;
    cout << endl;
}
