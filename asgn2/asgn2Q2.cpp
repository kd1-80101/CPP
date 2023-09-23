#include <iostream>
#include <cstring>
using namespace std;

class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address(){}
     Address(string building, string street, string city , int pin)
     {
         this->building = building;
         this->city = city;
         this->street = street;
         this->pin = pin;
     }
     
    void accept()
    {
        cout << "Enter Building name : " << endl;
        getline(cin, this->building);
        cout << "Enter Street name : " << endl;
        getline(cin, this->street);
        cout << "Enter city name : " << endl;
        getline(cin, this->city);
        cout << " Enter Zip Code : " << endl;
        cin >> this->pin;
    }

    void display()
    {
        cout << " Building name : " << this->building << endl;
        cout << " Street name : " << this->street << endl;
        cout << " City name : " << this->city << endl;
        cout << " Zip code : " << this->pin << endl;
    }

    string get_building()
    {
        return this->building;
    }

    string get_street()
    {
        return this->street;
    }

    string get_city()
    {
        return this->city;
    }

    int get_pin()
    {
        return this->pin;
    }

    string set_building(string building)
    {
        this->building = building;
    }

    string set_street(string street)
    {
        this->street = street;
    }

    string set_city(string city)
    {
        this->city = city;
    }

    int set_pin(int pin)
    {
        this->pin = pin;
    }
};

int main()
{
    Address a1,a2;
    a1.accept();
    a1.display();
    
    cout <<"Value from inspector building : "<< a1.get_building() << endl;
    cout <<"Value from inspector street : "<< a1.get_street() << endl;
    cout <<"Value from inspector city : "<< a1.get_city() << endl;
    cout <<"Value from inspector pin : "<< a1.get_pin() << endl;
    
    a2.set_building("Stark Tower");
    a2.set_city("AYODHYA");
    a2.set_street("Ram Path");
    a2.set_pin(224001);
    cout <<"Value from Mutator building : "<< a2.get_building() << endl;
    cout <<"Value from Mutator street : "<< a2.get_street() << endl;
    cout <<"Value from Mutator city : "<< a2.get_city() << endl;
    cout <<"Value from Mutator pin : "<< a2.get_pin() << endl;
    
    Address a3("JAI","SHREE","RAM",111111);
    a3.display();

    return 0;
}