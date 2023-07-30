#include <iostream>
#include "Ulamek.hpp"

int main() {
    Ulamek a{1, 2};
    Ulamek b{2, 3};
    a *= b;
    std::cout << a << '\n';
}
