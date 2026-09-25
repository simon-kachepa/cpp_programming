#include <iostream>

int main(){

    //int - used to declare a variable as of type integer
    int age = 30;
    std::cout<<"Age: "<<age <<'\n';

    //double - used to declare a variable as decimal number
    double gpa = 2.1;
    std::cout<<"GPA: "<<gpa <<'\n';

    //char - used to declare a variable as a single character
    char initial = 'S';
    std::cout<<"Initial: "<<initial <<'\n';

    //boolean used to declare a variable as either true or false
    bool isMarried = true;
    std::cout<<"IsMarried: "<<isMarried <<'\n';

    //String Literals
    char name[] = {"Simon"};
    std::cout<<name<<'\n';

    std::string surname = "Kachepa";
    std::cout<<surname<<'\n';


    return 0;
}