#include <iostream>

int main(){

    /*
    //Static arrays
    int array1[5] {10,20,30,40,50};

    //This prints the address of the first element
    std::cout<<array1<<'\n';
    std::cout<<&array1[0]<<'\n';

    //To print each element, we either use loops or index
    std::cout<<"Using the element index\n";

    std::cout<<array1[0]<<'\n';
    std::cout<<array1[1]<<'\n';
    std::cout<<array1[2]<<'\n';

    //2. using enhanced for loop
    std::cout<<"Using the enhanced for loop\n";
    for (auto num : array1){
        std::cout<<num<<'\n';
    }
    */
   //Dynamic arrays

   int *ptr_dArray = new int[10] {60, 70, 80, 90, 100};

   std::cout<<*ptr_dArray<<'\n';

   delete[] ptr_dArray;
   ptr_dArray = nullptr;
   



    return 0;
}