#include <iostream>

template <typename T>
class Calculator{
    public:
        T add(T x, T y){
            return x + y;
        }

        T subtract(T x, T y){
            return x - y;
        }

        T multiply(T x, T y){
            return x * y;
        }

        T divide(T x, T y){
            if(y == 0){
                std::cout<<"You can't divide by 0! "<<'\n';
                return 0;
            }
            return x / y;
        }
};

int main ()
{
    Calculator<int> intCalculator {};
    std::cout<<intCalculator.add(5, 8)<<'\n';
    std::cout<<intCalculator.subtract(10, 8)<<'\n';
    std::cout<<intCalculator.multiply(9, 5);
    std::cout<<intCalculator.divide(27, 3);

    Calculator<float> floatCalculator {};
    std::cout<<floatCalculator.add(90.10, 67.3)<<'\n';
    std::cout<<floatCalculator.subtract(100, 78);
    std::cout<<floatCalculator.divide(100.8, 4.2);
    std::cout<<floatCalculator.multiply(8.5, 7.6)<<'\n';

    return 0;
}