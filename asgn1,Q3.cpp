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
    int choice;
    Student S1;
    do
    {
        cout<<"1)Init Student"<<endl;
        cout<<"2)Enter Student into"<<endl;
        cout<<"3)Print Student info"<<endl;
        cout<<"4)EXIT"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        S1.initStudent();
        break;
        case 2:
        S1.acceptStudentFromConsole();
        break;
        case 3:
        S1.printStudentOnConsole();
        break;
        case 4:
        cout<<"EXITED"<<endl;
        default:
            break;
        }
    } while (choice !=4);
    
    return 0;
}