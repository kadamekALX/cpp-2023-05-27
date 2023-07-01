#include <iostream>

// funkcja f przyjmuje argument x przez referencję
void f(int& x) {
    x = 123;
}

void wypisz(const int& x) {
    std::cout << x << '\n';
}

int main() {
    int x = 5;
    int& y = x; //y jest referencją na x
    //referencje należy ustawic w momencie ich tworzenia i nie da się ich już później przestawić
//     int& z; //Błąd - referencja musi być zainicjalizowana
    const int& z = y;
    x = 7;
    std::cout << y << '\n';
    y = 10;
    std::cout << x << '\n';
//     z = 20; //Błąd, bo z jest const referencją
    f(y);
    std::cout << z << '\n';
    wypisz(x);
    wypisz(z);
    
//     int*
//     const int*
//     int* const
//     const int* const
}
