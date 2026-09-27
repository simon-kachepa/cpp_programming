#include "cylinder.h"

Cylinder::Cylinder(double radius, double height){
    this->radius = radius;
    this->height = height;
}
//Setters
void Cylinder::setRadius(double radius){
    this->radius = radius;
}
void Cylinder::setHeight(double height){
    this->height = height;
}

//Getters
double Cylinder::getRadius(){
    return this->radius;
}
double Cylinder::getHeight(){
    return this->height;
}

//Calculate Volume
double Cylinder::volume(){
    return (PI * (radius * radius) * height);
}

//Calculate Total surface area
double Cylinder::total_surface_area(){
    return ((2 * PI * radius)*(height + radius));
}