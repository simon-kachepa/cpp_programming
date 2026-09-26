#include <iostream>

int main(){
    /*
    //Checking if a Characher is Alphanumeric
    std::cout<<"===isalnum===\n";

    std::cout<<"Is 'B' Alphanumeric: "<<isalnum('B')<<'\n';
    std::cout<<"Is '9' Alphanumeric: "<<isalnum('9')<<'\n';
    std::cout<<"Is '*' Alphanumeric: "<<isalnum('*')<<'\n';

    //This can be used in a conditional statement
    char my_char {'@'};

    std::cout<<"==Checking alphanumeric in a conditional statement==\n";
    
    if(isalnum(my_char)){
        std::cout<<"The my_char: '"<<my_char<<"' is alphanumeric\n";
    }
    else{
        std::cout<<"The my_char: '"<<my_char<<"' is not alphanumeric\n";
    }
    */
    //Checking if a Characher is Alphabetic
    std::cout<<"===isalpha===\n";

    std::cout<<"Is 'B' Alphabetic: "<<isalpha('B')<<'\n';
    std::cout<<"Is '9' Alphabetic: "<<isalpha('9')<<'\n';
    std::cout<<"Is '*' Alphabetic: "<<isalpha('*')<<'\n';

    //This can be used in a conditional statement
    char initial {'P'};

    std::cout<<"==Checking alphabetic in a conditional statement==\n";
    
    if(isalpha(initial)){
        std::cout<<"The Character: '"<<initial<<"' is a valid human name initial\n";
    }
    else{
        std::cout<<"The my_char: '"<<initial<<"' is not a valid human name initial\n";
    }


    return 0;
}