#ifndef Cylinder_H
#define Cylinder_H
#include<iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double heigth;
    double volume;

public:
Cylinder();
Cylinder(double radius, double height);
double getRadius();
double setRadius(double r);
double getHeight();
double setHeight(double h);
double getVolume();
double printVolume();

};

#endif