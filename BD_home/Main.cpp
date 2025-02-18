#include <iostream>
#include <Windows.h>
#include "Human.h"
#include "House.h"
#include "Apartment.h"
using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(0, "");

    /*cout << "Вывод одного человека" << endl;
    Human user;
    user.generateRandomName();
    user.PrintHuman();
    cout << endl << "Вывод всех жильцов квартиры" << endl;

    Apartment apart{3};
    apart.PrintApartment();
    cout << endl;*/

    House home{5};
    home.PrintHouse();
}