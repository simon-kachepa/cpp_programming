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
    char myStr_1[]{ "Hello !!, Simon. This string should be long enough to bypass SSO!" };

    std::string myStr_2{ myStr_1 };
    std::string myStr_3{ myStr_2 };

    // Print the string
    std::cout << myStr_1 << '\n'
         << myStr_2 << '\n'
         << myStr_3 << '\n';

    std::cout<<"Total allocations: "<<allocations<<'\n';
    return 0;
}