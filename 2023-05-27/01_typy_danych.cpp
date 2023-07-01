#include <iostream>

int main() {
    std::cout << "to jest napis\n";
    std::cout << 'z' << '\n'; // znaki umieszczamy w apostrofach ' (char)
    
    std::cout << 14 << '\n'; // liczba całkowita (int)
    std::cout << 3.14 << '\n'; //liczba rzeczywista (float/double)
    
//     ZMIENNE
//     w momencie deklaracji nadajemy zmiennej typ danych, który może przechowywać
    int calkowita = 23; //deklarujemy zmienną typu int o nazwie 'calkowita'
    std::cout << calkowita << '\n';
    calkowita = 42;
    std::cout << calkowita << '\n';
    
//     int calkowita; //ponowna deklaracja zadeklarowanej zmiennej jest błędem
    double rzeczywista; // jeżeli nie przypiszemy do zmiennej żadnej wartości to będzie ona zawierać przypadkowe dane.
    std::cout << rzeczywista << '\n';
    
    int a;
    int A;
    int _a;
    int a2;
//     int 2a; // nazwa zmiennej nie może zaczynać się od cyfry
}
