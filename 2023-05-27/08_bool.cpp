#include <iostream>

int main() {
    bool prawda = true;
    bool falsz = false;
    
    bool b = 1 + 3 < 5;
    
    std::cout << "prawda = " << prawda << '\n';
    std::cout << "falsz = " << falsz << '\n';
    std::cout << "b = " << b << '\n';
    
    int x = 3;
    int y = 5;
    
    std::cout << x << " < " << y << " = " << (x < y) << '\n';
    std::cout << x << " <= " << y << " = " << (x <= y) << '\n';
    std::cout << x << " > " << y << " = " << (x > y) << '\n';
    std::cout << x << " >= " << y << " = " << (x >= y) << '\n';
    std::cout << x << " == " << y << " = " << (x == y) << '\n';
    std::cout << x << " != " << y << " = " << (x != y) << '\n';
}
