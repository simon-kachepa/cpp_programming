#include <iostream>

int main(){

    //Declaring Pointers and implicitly initialise them to nullptr
    int myNum {};
    int *ptr_myNum {};

    std::cout<<"Size of int: "<<sizeof(int)<<'\n';
    std::cout<<"Size of myNum: "<<sizeof(myNum)<<'\n';
    std::cout<<"Size of int*: "<<sizeof(int*)<<'\n';
    std::cout<<"Size of ptr_myNum: "<<sizeof(ptr_myNum)<<'\n';

    double num2 {};
    double *ptr_num2 {};

    std::cout<<"Size of double: "<<sizeof(double)<<'\n';
    std::cout<<"Size of num2: "<<sizeof(num2)<<'\n';
    std::cout<<"Size of double*: "<<sizeof(double*)<<'\n';
    std::cout<<"Size of ptr_num2: "<<sizeof(ptr_num2)<<'\n';

    // Declaring pointers and assigning values to them
    int num3 {10};
    int *ptr_num3 {&num3};

    std::cout<<"The value of num3 is: " << num3 <<'\n';
    std::cout<<"The value of ptr_num3 is: " << ptr_num3 <<'\n';

    //Dereferencing a Pointer
    int *ptr_num4 {};
    int num4 {50};

    ptr_num4 = &num4;

    std::cout<<"The value stored at the address ptr is: "<<*ptr_num4<<'\n';




    return 0;
}