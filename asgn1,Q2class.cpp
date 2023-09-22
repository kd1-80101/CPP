#include <iostream>
using namespace std;

class Date
{
    private:
    int dd, mm, yy;

    public:

    void initDate()
    {
        dd = 1;
        mm = 1;
        yy = 0000;
    }

    void printDateOnConsole()
    {
        cout << "DATE =" << dd << "/" << mm << "/" << yy << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "please enter the day" << endl;
        cin >> dd;

        cout << "please enter the month" << endl;
        cin >> mm;

        cout << "please enter the year" << endl;
        cin >> yy;
    }

    bool isLeapYear()
    {
        
        if (((yy% 400 == 0) || (yy % 100 != 0) && (yy % 4 == 0)))
            return true;
        else
            return false;
    }
};

int main()
{

     Date k;
    int choice;
    do
    {
        cout << "\n MENU" << endl;
        cout << "\n1) init Date" << endl;
        cout << "2) print Date" << endl;
        cout << "3) Accept Date" << endl;
        cout << "4) Check if year is leap" << endl;
        cout << "0) EXIT\n" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            k.initDate();
            break;

        case 2:
            k.printDateOnConsole();
            break;

        case 3:
            k.acceptDateFromConsole();
            break;

        case 0:
            cout << "EXITED" << endl;
            break;
        case 4:
            if(k.isLeapYear())
            {cout <<"is leap year" << endl;
            }
            else
            {cout <<"is normal year" << endl;
            }
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}