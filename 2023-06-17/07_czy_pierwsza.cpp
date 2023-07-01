// napisz funkcję
// bool czy_pierwsza(int n)
// zwracającą informację, czy n jest pierwsze

// (*) wynik dla 1'000'000'000 powinien być policzony w czasie <1s
// (**) wynik dla 1'000'000'007 powinien być policzony w czasie <1s
#include <iostream>

bool czy_pierwsza(int n) {
    if (n == 1)
        return false;
    
    for (int i = 2; i <= n / 2; i += 1) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 1; i < 20; i += 1) {
        std::cout << i << ": " << czy_pierwsza(i) << '\n';
    }
    
    if (czy_pierwsza(1000000000)) {
        std::cout << "1000000000 jest pierwsze\n";
    }
    else {
        std::cout << "1000000000 nie jest pierwsze\n";
    }
    
    if (czy_pierwsza(1000000007)) {
        std::cout << "1000000007 jest pierwsze\n";
    }
    else {
        std::cout << "1000000007 nie jest pierwsze\n";
    }
}
