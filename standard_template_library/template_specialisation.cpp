#include <iostream>
#include <cstring>

template <typename T> T maximum(T x, T y){
    return (x > y) ? x : y;
}
template <> 
const char* maximum<const char*>(const char* x, const char* y){
    return (std:: strcmp(x,y) > 0)? x : y;
}

int main()
{
    /**
     * 
    int a {5};
    int b {6};
    double c {10.5};
    double d {8.4};
    std::string e {"Simon"};
    std::string f {"Kachepa"};

    int max_int = maximum(a, b);
    double max_double = maximum(c, d);
    std::string max_str = maximum(e, f);

    std::cout<<"max_int: "<<max_int<<'\n';
    std::cout<<"max_double: "<<max_double<<'\n';
    std::cout<<"max_str: "<<max_str<<'\n';

    */

    //Now passing const char* as the parameters:::
    const char* g{"Hello"};
    const char* h{"World"};

    //NB** Calling our max function using these char* as parameters will not giving us what we need.
    // It will compare the pointers and not the real data pointed by these pointers
    auto max_pchar = maximum(g, h);

    std::cout<<"&g: "<< &g<<'\n';
    std::cout<<"&h: "<< &h<<'\n';
    

    std::cout<<"max_pchar: "<<max_pchar<<'\n';


    return 0;
}


