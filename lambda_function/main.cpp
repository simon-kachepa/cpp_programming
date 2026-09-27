#include<iostream>

int main(){
    /**
    //Declaring lambda function
    auto greeting = [](){
        std::cout<<"Hello, world!\n";
    };

    std::cout<<"Before Lambda function call\n";

    greeting();

    std::cout<<"After Lambda function call\n";
    */
    /**
    //Lambda functions that returns a value
    auto greater = [](int x, int y){
        if(x > y)
            return x;
        else
            return y;
    };

    std::cout<<"Before Lambda function call\n";

    std::cout<<"The greater value: "<<greater(10, 20)<<'\n';

    std::cout<<"After Lambda function call\n";

     */

     //Calling the lambda function imediately
     [](std::string name){
        std::cout<<"Hello "<<name<<'\n';
     }("Simon");
     
    return 0;
}