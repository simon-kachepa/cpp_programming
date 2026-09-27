#include <iostream>

class Car{
    private:
        std::string make {};
        std::string model {};
        int year {};
        std::string colour {};

    public:
        //Constructor
        Car(std::string make, std::string model, int year, std::string colour){
            this->make = make;
            this->model = model;
            this->year = year;
            this->colour = colour;
        }

        //Setter & Getter for the make
        void setMake(std::string make){
            this->make = make;
        }
        std::string getMake(){
            return this->make;
        }

        //Setter & Getter for the model
        void setModel(std::string model){
            this->model = model;
        }
        std::string getModel(){
            return this->model;
        }

        //Setter & Getter for the Year
        void setYear(int year){
            this->year = year;
        }
        int getYear(){
            return this->year;
        }

        //Setter & Getter for the colour
        void setColour(std::string colour){
            this->colour = colour;
        }
        std::string getColour(){
            return this->colour;
        }
        
        //Method to display the description of my Car
        void display_info(){
            std::cout<<"***********************************\n";
            std::cout<<"Full Description of my Car: \n";
            std::cout<<"Make: "<<make<<'\n';
            std::cout<<"Model: "<<model<<'\n';
            std::cout<<"Year: "<<year<<'\n';
            std::cout<<"Colour: "<<colour<<'\n';
        }
};

int main(){

    //Creating the car object
    Car myNewCar("Ford", "Everest", 2026, "Silver");

    //Printing the details of the car object from the set up before setting the new description
    myNewCar.display_info();
    std::cout<< "My car colour: "<< myNewCar.getColour()<<'\n';
    std::cout<< "My car Year: "<< myNewCar.getYear()<<'\n';

    //Setting new Colour for our car using the setColour method
    myNewCar.setColour("Red");
    myNewCar.setYear(2025);

    //Displaying the new details of our car
    myNewCar.display_info();
    std::cout<< "My car colour: "<< myNewCar.getColour()<<'\n';
    std::cout<< "My car Year: "<< myNewCar.getYear()<<'\n';

    return 0;
}