#include <iostream>

// if (warunek) {
//     //kod, ktory ma się wykonać jeśli warunek jest prawdziwy
// }

int main() {
    int x;
    std::cin >> x;
    
    if (x > 0) {
        std::cout << "Dodatnia\n";
    }
    else { //zawartość else wykona się jeśli warunek w ifie powyżej nie zostanie spełniony
        std::cout << "Niedodatnia\n";
    }
    
    std::cout << "Koniec programu\n";
}
