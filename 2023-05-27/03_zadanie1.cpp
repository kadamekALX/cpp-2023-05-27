//Zadanie 1.
// Stwórz w programie zmienną typu int o nazwie 'liczba', nadaj jej wartość 64, a następnie wypisz:
// - podwójną wartość zmiennej
// - zmienną powiększoną o 3
// - wynik dzielenia całkowitego zmiennej przez 3 oraz resztę z tego dzielenia
// (zagadka) wynik rzeczywisty dzielenia zmiennej przez 7
#include <iostream>

int main() {
    int liczba = 64;
    
    std::cout << "Podwojna wartosc: " << 2 * liczba << '\n';
    std::cout << liczba << " + 3 = " << liczba + 3 << '\n';
    std::cout << liczba << " / 3 = " << liczba / 3 << " r " << liczba % 3 << '\n';
    
    std::cout << liczba / 7 << '\n';
    std::cout << liczba / 7.0 << '\n';
    //obecność liczby rzeczywistej po jednej stronie działania sprawia, że wynik działania również będzie liczbą rzeczywistą
    
    std::cout << (float)liczba / 7 << '\n';
    // zapis (typ)wartosc konwertuje wartosc na zadany typ
    
//     double wynik = liczba / 7;
//     std::cout << wynik << '\n';
}
