#include <iostream>
using namespace std;

class Tollbooth
{
private:
    unsigned int payed;
    unsigned int free;
    double amt;

public:
    Tollbooth()
    {
        this->payed = 0;
        this->amt = 0;
        this->free = 0;
    }

    void payingCar()
    {
        cout << "Thanks for paying the toll....:)" << endl;
        this->amt += 0.50;
        this->payed+=1;
    }

    void nonpayingCar()
    {
        this->free+=1;
    }

    void printOnConsole()
    {
        cout << "*****************" << endl;
        cout << "DETAILS :" << endl;
        cout << "No of Cars who payed the toll :" << this->payed << endl;
        cout << "Amount Collected :" << this->amt << endl;
        cout << "No of Cars who did not payed the toll :" << this->free<<endl;
        cout << "*****************" << endl;
    }

    void menu()
    {
        cout << "*****************" << endl;
        cout << "Select the choice" << endl;
        cout << "0) EXIT" << endl;
        cout << "1) Car payed the toll" << endl;
        cout << "2) Car not payed the toll" << endl;
        cout << "3) Details about Tollbooth" << endl;
        cout << "*****************" << endl;
    }
};

int main()
{
    int choice;
    Tollbooth b1;
    do
    {
        b1.menu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            b1.payingCar();
            break;
        case 2:
            b1.nonpayingCar();
            break;
        case 3:
            b1.printOnConsole();
            break;
        case 0:
            cout << "EXITED..." << endl;
            break;
        default:
            cout << "INVALID CHOICE PLEASE RE-ENTER" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}