#include <iostream>

int main(){

    int num {100};
    int& ref_num {num};
    int* ptr_num {&num};

    //Printing the values
    std::cout<<"The value of num: "<<num<<'\n';
    std::cout<<"The value of ref_num: "<<ref_num<<'\n';
    std::cout<<"The value of ptr_num: "<<*ptr_num<<'\n';

    //Printing the addresses
    std::cout<<"The address of num: "<<&num<<'\n';
    std::cout<<"The address of ref_num: "<<&ref_num<<'\n';
    std::cout<<"The address of ptr_num: "<<ptr_num<<'\n';

    //Changing the values using the pointer
    *ptr_num = 200;

    //Printing the new value
    std::cout<<"===========The new value of num===========\n";
    std::cout<<"The value of num: "<<num<<'\n';
    std::cout<<"The value of ref_num: "<<ref_num<<'\n';
    std::cout<<"The value of ptr_num: "<<*ptr_num<<'\n';

    return 0;
}