#include "./cylinder.h"
#include "./menu.h"

int main()
{
    Cylinder c;
    Emenu choice;

    while ((choice = menu()) != Exit)
    {
        switch (choice)
        {
        case GET_RADIUS:
           cout<<"Radius :"<<c.getRadius()<<endl;
            break;
        case GET_HEIGHT:
            cout<<"Heigth :"<<c.getHeight()<<endl;
            break;
        case SET_RADIUS:
            double r;
            cout << "Enter Radius" << endl;
            cin >> r;
            c.setRadius(r);
            cout << "Updated Radius :" << c.getRadius() << endl;
            break;
        case SET_HEIGHT:
            double h;
            cout << "Enter Height" << endl;
            cin >> h;
            c.setHeight(h);
            cout << "Updated Height :" << c.getHeight() << endl;
            break;
        case GET_VOLUME:
            c.getVolume();
            cout << "Volume :" << c.getVolume() << endl;
            break;
        case PRINT_VOLUME:
            c.printVolume();
            break;

        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }
    cout << "Thank you for using our app...:)" << endl;
    return 0;
}