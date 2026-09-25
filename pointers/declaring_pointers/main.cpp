#include <iostream>

int main(){

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


    return 0;
}