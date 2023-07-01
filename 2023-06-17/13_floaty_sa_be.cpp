#include <iostream>
#include <limits>
#include <iomanip>

int main() {
    if (1.0 + 1.0 == 2.0)
        std::cout << "OK 1\n";
    if (0.1 + 0.1 == 0.2)
        std::cout << "OK 2\n";
    if (1.0 + 1.0 + 1.0 == 3.0)
        std::cout << "OK 3\n";
    if (0.1 + 0.1 + 0.1 == 0.3) // 3 * 0.1 nie daje w wyniku najbliższego przybliżenia 0.3
        std::cout << "OK 4\n";
    if (0.125 + 0.125 + 0.125 == 0.375)
        std::cout << "OK 5\n";
    std::cout << "sizeof(float) = " << sizeof(float) << '\n';
    std::cout << "sizeof(double) = " << sizeof(double) << '\n';
    std::cout << "max double = " << std::numeric_limits<double>::max() << '\n';
    
    //nie wszystkie wartości są reprezentowane precyzyjnie
    std::cout << std::setprecision(30) << 0.1 << '\n';
    std::cout << std::setprecision(30) << 0.2 << '\n';
    std::cout << std::setprecision(30) << 0.3 << '\n';
    std::cout << std::setprecision(30) << 0.1 * 3 << '\n';
}
