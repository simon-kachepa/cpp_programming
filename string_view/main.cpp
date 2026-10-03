// C++ program to demonstrate the
// problem occurred in string
#include <iostream>
#include <string>

static uint32_t allocations = 0;

void* operator new(size_t size){
    allocations++;
    std::cout<<"Allocationg " <<size <<"bytes\n";
    return malloc(size);
}

// Driver Code
int main()
{
    /** 
     * This first commented program shows the traditional way of creating strings using the char array methon
     * The char array method of creating a string does not allocate on the HEAP, because the array is static in this case
     * But the use of std::string when creating a large, or long string - at least 23 characters will then overflow in 
     * a temporary string pool in the STACK therefore it is allocated on HEAP
     * So this program allocates on heap twice - when we create myStr_2 & myStr_3
    char myStr_1[]{ "Hello !!, Simon. This string should be long enough to bypass SSO!" };

    std::string myStr_2{ myStr_1 };
    std::string myStr_3{ myStr_2 };

    // Print the string
    std::cout << myStr_1 << '\n'
         << myStr_2 << '\n'
         << myStr_3 << '\n';

    std::cout<<"Total allocations: "<<allocations<<'\n';
    */
    
     // This program allocates on HEAP three times, when we allocate name, name_copy & name_copy_2
     //However if the number of the characters are not much, less than 23 chars
     // can then be allocated on the string pool
    
    std::string name {"Simon, this text should be long enough for it to be dynamically allocated"};

    std::string copy_name {name};
    std::string copy_name_2 {copy_name};

    std::cout<<name<<'\n';
    std::cout<<copy_name<<'\n';
    std::cout<<copy_name_2<<'\n';

    std::cout<<&name<<'\n';
    std::cout<<&copy_name<<'\n';
    std::cout<<&copy_name_2<<'\n';


    std::cout<<"Total allocations: "<<allocations<<'\n';
   
    //This Program uses the string_view and does not have any allocation on the HEAP
    std::string_view message {"Simon, this text can't be allocated on HEAP regardless of its length"};
    std::string_view message_2 {message};
    std::string_view message_3 {message_2};

    std::cout<<"*************STRING_VIEW**********\n";
    std::cout<<message<<'\n';
    std::cout<<message_2<<'\n';
    std::cout<<message_3<<'\n';

    std::cout<<&message<<'\n';
    std::cout<<&message_2<<'\n';
    std::cout<<&message_3<<'\n';
    std::cout<<"Total allocations: "<<allocations<<'\n';

    return 0;
}