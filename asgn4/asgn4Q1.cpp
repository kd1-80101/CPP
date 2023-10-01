#include <iostream>
using namespace std;
class Time
{
private:
    int Hour;
    int Minute;
    int Second;

public:
    Time()
    {
    }

    Time(int h, int m, int s)
    {
        this->Hour = h;
        this->Minute = m;
        this->Second = s;
    }

    int printTimes()
    {
        cout << "TIME : " << this->Hour << ":" << Minute << ":" << Second << endl;
    }

    int getHour()
    {
        cout << "Hour : " << this->Hour << endl;
    }
    int getMinute()
    {
        cout << "Minute : " << this->Minute << endl;
    }
    int getSecond()
    {
        cout << "Second :" << this->Second << endl;
    }

    int setHour()
    {
        cout << "Hour : " << endl;
        cin >> this->Hour;
    }
    int setMinute()
    {
        cout << "Minute : " << endl;
        cin >> this->Minute;
    }
    int setSecond()
    {
        cout << "Second :" << endl;
        cin >> this->Second;
    }
};

int main()
{
    /*Time t1(10,20,20);
    t1.printTimes();
    t1.getHour();
    t1.getMinute();
    t1.getSecond();
    t1.setHour();
    t1.setMinute();
    t1.setSecond();
    t1.printTimes();
    */
    Time **arr = new Time *[2];
    arr[0] = new Time();
    arr[1] = new Time();

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the Time for " << i << " Object" << endl;
        arr[i]->setHour();
        arr[i]->setMinute();
        arr[i]->setSecond();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Time for " << i << " Object from Inspector (get Function): " << endl;
        arr[i]->getHour();
        arr[i]->getMinute();
        arr[i]->getSecond();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Time for " << i << " Object" << endl;
        arr[i]->printTimes();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Deallocating memory for " << i << " Object" << endl;
        delete arr[i];
    }
    delete[] arr;

    return 0;
}