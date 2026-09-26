#include <iostream>

int main(){

    int myNum {50};
    //Reference to myNum
    int& myNum_ref {myNum};

    //Accessing the values
    std::cout<<"mynum: "<<myNum<<'\n';
    std::cout<<"myNum_ref: "<<myNum_ref<<'\n';

    //Accessing the addresses
    std::cout<<"The address of myNum: "<<&myNum<<'\n';
    std::cout<<"The address of myNum_ref: "<<&myNum_ref<<'\n';

    //Accessing the size of
    std::cout<<"The size of myNum: "<<sizeof(myNum)<<'\n';
    std::cout<<"The size of myNum_ref: "<<sizeof(myNum_ref)<<'\n';

    //Modifyng the data using the original variable
    myNum = 100;
    //Accessing the new value
    std::cout<<"========The new value========\n";
    std::cout<<"mynum: "<<myNum<<'\n';
    std::cout<<"myNum_ref: "<<myNum_ref<<'\n';

    //Modifyng the data using the references
    myNum_ref = 200;
    //Accessing the new value
    std::cout<<"========The new value========\n";
    std::cout<<"mynum: "<<myNum<<'\n';
    std::cout<<"myNum_ref: "<<myNum_ref<<'\n';


    return 0;
}