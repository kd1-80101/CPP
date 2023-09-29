#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int dd, int mm, int yy)
    {
        this->day = dd;
        this->month = mm;
        this->year = yy;
    }
    int get_day()
    {
        cout << "DAY :" << this->day << endl;
    }
    void set_day(int dd)
    {
        this->day = dd;
    }
    int get_month()
    {
        cout << "MONTH :" << this->month << endl;
    }
    void set_month(int mm)
    {
        this->month = mm;
    }
    int get_year()
    {
        cout << "YEAR :" << this->year << endl;
    }

    void set_year(int yy)
    {
        this->year;
    }

    void Display()
    {
        cout << "DATE :" << this->day << "/" << this->month << "/" << this->year << endl;
        if (is_leap_year())
            cout << "YEAR " << this->year << " IS LEAP YEAR" << endl;
        else
            cout << "YEAR " << this->year << " IS NOT LEAP YEAR" << endl;
    }
    void Accept()
    {
        cout << "----------------------" << endl;
        cout << "ENTER THE DAY" << endl;
        cout << "DATE :" << endl;
        cin >> this->day;
        cout << "MONTH :" << endl;
        cin >> this->month;
        cout << "YEAR :" << endl;
        cin >> this->year;
        cout << "----------------------" << endl;
    }
    bool is_leap_year()
    {
        if (year % 4 == 0 || year % 400 == 0 && year % 100 != 0)
            return true;
        else
            return false;
    }
};

class Person
{
private:
    string name;
    string addr;
    Date birth_date;

public:
    Person()
    {
        this->name = "";
        this->addr = "";
    }
    Person(string name, string addr, Date birth_date)
    {
        this->name = name;
        this->addr = addr;
        this->birth_date = birth_date;
    }
    string get_name()
    {
        return name;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    string get_addr()
    {
        return addr;
    }
    void set_addr(string addr)
    {
        this->addr = addr;
    }
    Date get_birth_date()
    {
        return birth_date;
    }
    void set_birth_date(Date birth_date)
    {
        this->birth_date = birth_date;
    }
    void Display()
    {
        cout << "NAME :" << this->name << endl;
        cout << "ADDRESSS :" << this->addr << endl;
        cout << "BIRTH";
        birth_date.Display();
    }
    void Accept()
    {
        cout << "ENTER PERSONAL DETAILS :" << endl;
        cout << "NAME :" << endl;
        cin >> this->name;
        cout << "ADDRESS :" << endl;
        cin >> this->addr;
    }
};

class Employee : public Person
{
private:
    int id;
    float sal;
    string dept;
    Date joining;

public:
    Employee() : joining()
    {
        this->id = 0;
        this->sal = 1000;
        this->dept = "";
    }
    Employee(string name, string addr, Date birth_date, int id, float sal, string dept, Date joining) : Person(name, addr, birth_date)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
        this->joining = joining;
    }
    int get_id()
    {
        cout << "EMPLYOEE ID :" << this->id << endl;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    float get_sal()
    {
        cout << "EMPLYOEE SAL :" << this->sal << endl;
    }
    void set_year(float sal)
    {
        this->sal = sal;
    }
    string get_dept()
    {
        cout << "EMPLOYEE DEPT :" << this->dept << endl;
    }
    void set_dept(string dept)
    {
        this->dept;
    }
    Date get_joining_date()
    {
        return joining;
    }
    void set_joining_date(Date joining)
    {
        this->joining = joining;
    }
    void Display()
    {
        cout << "__________________________________" << endl;
        cout << "EMPLYOEE NO : " << this->id << endl;
        Person::Display();
        cout << "JOINING ";
        joining.Display();
        cout << "__________________________________" << endl;
    }
    void Accept()
    {
        cout << "ENTER ID NO :";
        cin >> this->id;
        cout << "ENTER SAL :";
        cin >> this->sal;
        cout << "ENTER DEPT NAME :";
        cin >> this->dept;
        cout << "ENTER THE DATE OF JOINING" << endl;
        joining.Accept();
        Person::Accept();
    }
};

int main()
{
    Date d(16, 2, 2000);
    Date pp(27, 06, 2000);
    // Date d2, d3;
    // d2.Accept();
    // d2.Display();
    // d3.set_day(2);
    // d3.set_month(2);
    // d3.set_year(2);
    // d3.Display();
    // d3.get_day();
    // d3.get_month();
    // d3.get_year();

    Employee e1("PRASANNA", "ISLAMPUR, SANGLI ", d, 01, 9999999, "MKTG", pp);
    e1.Display();

    // Employee e2, e3;
    // e2.Accept();
    // e2.Display();
    // e3.get_addr();

    // e3.get_birth_date();
    // e3.get_dept();
    // e3.get_id();
    // e3.get_joining_date();
    // e3.get_name();
    // e3.get_sal();
    // e3.Display();

    return 0;
}