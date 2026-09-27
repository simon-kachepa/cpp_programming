#include <iostream>
#include "cylinder.h"

int main (){

    Cylinder cylinder1 {};
    std::cout<<"The volume of Cylinder1: "<<cylinder1.volume()<<'\n';
    std::cout<<"The Total Surface Area of Cylinder1: "<<cylinder1.total_surface_area()<<'\n';

    Cylinder cylinder2(6.8, 12.0);
    std::cout<<"The volume of Cylinder2: "<<cylinder2.volume()<<'\n';
    std::cout<<"The Total Surface Area of Cylinder2: "<<cylinder2.total_surface_area()<<'\n';

    return 0;
}