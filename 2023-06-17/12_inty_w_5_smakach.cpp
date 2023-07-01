#include <iostream>
#include <limits>

int main() {
    int i = 0;
    int maxint = std::numeric_limits<int>::max();
    std::cout << "max int = " << maxint << '\n';
    std::cout << "min int = " << std::numeric_limits<int>::min() << '\n';
    std::cout << "sizeof(int) = " << sizeof(int) << '\n';
    std::cout << "sizeof(short int) = " << sizeof(short int) << '\n';
    std::cout << "sizeof(long int) = " << sizeof(long int) << '\n';
    std::cout << "sizeof(long long int) = " << sizeof(long long int) << '\n';
    std::cout << "sizeof(int32_t) = " << sizeof(int32_t) << '\n'; //gwarancja 32 bitów
    

    unsigned int u = 0; // int bez znaku
    std::cout << u - 1 << '\n';
    
    unsigned long long int x;
    std::cout << std::numeric_limits<unsigned long long int>::max() << '\n';
}
