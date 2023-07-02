#include <iostream>
#include <functional>

void wypisz(int x) {
    std::cout << "wypisuje: " << x << '\n';
}

//funkcja wywolaj przyjmuje wskaznik na funkcję przyjmującą int i zwracajaca void oraz inta x
void wywolaj(void (*fun)(int), int x) {
    std::cout << "Uwaga, wywoluje:\n";
    fun(x);
}

//std::function - C++ way
void wywolaj_2arg(std::function<int(int, int)> fun, int a, int b) {
    int wynik = fun(a, b);
    std::cout << "Wynikiem wywolania jest " << wynik << '\n';
}

int dodaj(int a, int b) {
    return a + b;
}

int main() {
    wywolaj(wypisz, 10);
    wywolaj_2arg(dodaj, 10, 15);
    
//     [](){}
//     [](int x){std::cout << x << '\n';}(15);
    wywolaj_2arg([](int a, int b){return a * b;}, 10, 7);
    //[](int a, int b){return a * b;} jest funkcją anonimową (bez nazwy), która przyjmuje 2 inty i zwraca wynik ich mnożenia
    
}
