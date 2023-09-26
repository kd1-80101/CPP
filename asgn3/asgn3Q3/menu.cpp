#include "./menu.h"
#include <iostream>
using namespace std;

Emenu menu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. GET RADIUS" << endl;
    cout << "2. GET HEIGHT" << endl;
    cout << "3. SET RADIUS" << endl;
    cout << "4. SET HEIGHT" << endl;
    cout << "5. GET VOLUME" << endl;
    cout << "6. PRINT VOLUME" << endl;
    cout << "Enter your choice = ";
    cin >> choice;
    cout << "*******************" << endl;
    return Emenu(choice);
}

