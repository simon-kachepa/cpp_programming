#include <iostream>

class Car{
    private:
        std::string make {};
        std::string model {};
        int year {};
        std::string colour {};

    public:
        //Car () = default; //used to set up a default no argument constructor
        Car(){
            this->make = "Chevrolet";
            this->model = "Covertte";
            this->year = 2026;
            this->colour = "Blue";
        }

        Car(std::string make, std::string model, int year, std::string colour){
            this->make = make;
            this->model = model;
            this->year = year;
            this->colour = colour;
        }

        void display_info(){
            std::cout<<"Full Description of my Car: \n";
            std::cout<<"Make: "<<make<<'\n';
            std::cout<<"Model: "<<model<<'\n';
            std::cout<<"Year: "<<year<<'\n';
            std::cout<<"Colour: "<<colour<<'\n';
        }
};

int main(){

    Car myCar {};

    //Printing info using the initialised values specified by the no param constructor
    myCar.display_info();

    //Getting the description using the Costructor set to accept the args
    Car myNewCar("Ford", "Everest", 2026, "Silver");
    myNewCar.display_info();


    return 0;
}