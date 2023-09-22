#include <iostream>
#include<cstring>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float marks;

public:
    void initStudent()
    {
        roll=00;
        name="student_name";
        marks=00;

    }
    void printStudentOnConsole()
    {
        cout<<"Roll NO : "<<roll<<"\nStudent Name : "<<name<<"\n Marks : "<<marks<<endl;
    }
    void acceptStudentFromConsole()
    {
        cout<<"Roll NO : "<<endl;
        cin>>roll;
        cout<<"\nStudent Name : "<<endl;
        cin>>name;
        cout<<"\n Marks : "<<endl;
        cin>>marks;
    }
};

int main()
{
    Student S1;
    S1.acceptStudentFromConsole();
    S1.printStudentOnConsole();
    return 0;
}