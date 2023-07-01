#include <iostream>

// typ_zwracany nazwa(argumenty) {
    //kod
// }

//funkcja zwracająca void nic nie zwraca
void hello() {
    std::cout << "Hello!\n";
}

// funkcja zwracająca typ inny niż `void` MUSI zakończyć się instrukcją `return`
int daj5() {
    std::cout << "Uwaga, zwracam 5\n";
    return 2 + 3; //return kończy funkcję
//     std::cout << "Zwrócilem 5\n"; //to się nigdy nie wykona
}

//każdy argument musi być poprzedzony typem
void argument(int a) {
    std::cout << "Dostalem zmienna a = " << a << '\n';
}

int maks(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int main() {
    std::cout << "poczatek programu\n";
    hello(); //wywołanie funkcji 'hello'
    std::cout << "program leci dalej...\n";
    hello();
    hello();
    int x = daj5();
    std::cout << "x = " << x << '\n';
    argument(17);
    argument(daj5());
    std::cout << "maks(5, 7) = " << maks(5, 7) << '\n';
    return 0;
}
