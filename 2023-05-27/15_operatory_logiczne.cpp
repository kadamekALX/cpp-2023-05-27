#include <iostream>

int main() {
    //AND - && - koniunkcja
    std::cout << "true && true = " << (true && true) << '\n';
    std::cout << "true && false = " << (true && false) << '\n';
    std::cout << "false && true = " << (false && true) << '\n';
    std::cout << "false && false = " << (false && false) << '\n';
    
    //OR - || - alternatywa
    std::cout << "true || true = " << (true || true) << '\n';
    std::cout << "true || false = " << (true || false) << '\n';
    std::cout << "false || true = " << (false || true) << '\n';
    std::cout << "false || false = " << (false || false) << '\n';
    
    //NOT - ! - negacja
    std::cout << "!true = " << !true << '\n';
    std::cout << "!false = " << !false << '\n';

    int liczba;
    std::cin >> liczba;
    if (liczba >= 10 && liczba < 20)
        std::cout << "W przedziale\n";
    
}
