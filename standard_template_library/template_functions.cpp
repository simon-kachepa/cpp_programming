#include <iostream>

//declaring the subsequent function as a template func
template <typename T>
void print(T a)
{
    std::cout<<"Entered input: "<<a<<'\n';
}

//declaring a second template func that work with numbers
template <typename T>
T add(T x, T y){
    return x + y;
}
int main()
{
    //Declaring variables of different data types that will be accepted by the template function print()
    int myNum {100};
    float myDec {50.7};
    char initial {'S'};
    std::string name {"Simon"};

    //Calling the template func print() with different data types
    print(myNum);
    print(myDec);
    print(initial);
    print(name);

    //Calling the add() 
    std::cout<<add(10, 70)<<'\n';
    return 0;
}