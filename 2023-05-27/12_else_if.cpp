#include <iostream>

int main() {
//     if (war) instrukcja
    int x = 30;
    if (x < 5)
        std::cout << "to jest wewnatrz ifa\n";
    std::cout << "poza ifem\n";
    
    {
        std::cout << "Wewnatrz klamerek\n";
        std::cout << "Wewnatrz klamerek\n";
    }
    
//     if (war) instr else instr2
    if (x < 10)
        std::cout << "hej\n";
    else if (x < 20)
        std::cout << "x < 20\n";
    else
        std::cout << "x >= 20\n";
    
}
