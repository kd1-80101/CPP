#include<iostream>
using namespace std;

class Box
{
private:
    float length, breadth, height;

public:
    Box(float length, float breadth, float height)
    {
        cout << "\n volume of box ="<<length * breadth * height << endl;
    }
    Box()
    {
        this->breadth = 0.0;
        this->height = 0.0;
        this->length = 0.0;
    }
    
};
int main()
{

    Box *b1;
    int choice;
    do
    {
        cout << "\n MENU" << endl;
        cout << "1)CALCULATE VOLUME" << endl;
        cout << "0)EXIT" << endl;  
        cin>>choice;
        switch (choice)
        {
        case 1:
            int l,b,h;
            cout<<"Enter length"<<endl;
            cin>> l;
            cout<<"Enter breadth"<<endl;
            cin>> b;
            cout<<"Enter height"<<endl;
            cin>> h;
            b1=new Box(l,b,h);
            break;
        
        default:
            break;
        }

    } while (choice!=0);
    

    return 0;
}