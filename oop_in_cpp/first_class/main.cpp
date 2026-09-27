#include<iostream>

class Car{
    public:
        std::string make {};
        std::string model {};
        int year {};
        std::string colour {};

    
    void display_info(){
        std::cout<<"Make: "<<make<<'\n';
        std::cout<<"Model: "<<model<<'\n';
        std::cout<<"Year: "<<year<<'\n';
        std::cout<<"Colour: "<<colour<<'\n';
        }
};

int main(){

    Car myCar {};
    myCar.make = "Chevrolet";
    myCar.model = "Camaro";
    myCar.year = 2024;
    myCar.colour = "Red";

    myCar.display_info();

    return 0;
}