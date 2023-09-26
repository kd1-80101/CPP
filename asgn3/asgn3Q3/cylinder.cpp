#include "./cylinder.h"

Cylinder::Cylinder()
{
    this->radius = 1;
    this->heigth = 1;
}
Cylinder::Cylinder(double radius, double height)
{
    this->radius = radius;
    this->heigth = height;
}
double Cylinder::getRadius()
{
    return this->radius;
}
double Cylinder::setRadius(double r)
{
    this->radius = r;
}
double Cylinder::getHeight()
{
    return this->heigth;
}
double Cylinder::setHeight(double h)
{
    this->heigth = h;
}
double Cylinder::getVolume()
{
    this->volume = 3.14 * this->radius * this->radius * this->heigth;
    return this->volume;
}
double Cylinder::printVolume()
{
    cout << "Volume of Cylinder : " << this->getVolume() << endl;
}