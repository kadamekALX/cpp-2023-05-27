#include <iostream>

// while (warunek) {
//     kod - wykonuje sie jesli warunek jest spełniony
//     po wykonaniu kodu wracamy do sprawdzenia warunku
// }

int main() {
//     while (true) {
//         std::cout << "hej\n";
//     }
    
    int licznik = 0;
    while (licznik < 10) {
        std::cout << "hejo " << licznik << '\n';
        licznik += 1;
    }
}
