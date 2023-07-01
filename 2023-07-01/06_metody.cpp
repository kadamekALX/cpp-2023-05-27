#include <iostream>

struct Punkt {
    int x;
    int y;

    //const po metodzie oznacza, że nie ma ona prawa do modyfikacji obiektu
    void wypisz() const {
        std::cout << x << ' ' << y << '\n';
//         x = 10; //Blad, bo wypisz jest metodą constową
    }
    
    //każda metoda zawiera dodatkowo wskaźnik `this`, który przechowuje adres obiektu, na którym została wywołana ta metoda
    void ustaw(int a, int y) {
//         std::cout << this << '\n';
        x = a;
        this->y = y;
    }
};

void wypisz(const Punkt& p) {
    std::cout << "Funkcja\n";
    std::cout << p.x << " " << p.y << '\n';
//     p.x = 10;
}

int main() {
    Punkt p;
    p.ustaw(1, 2);
    wypisz(p);
    p.wypisz(); // wywołanie metody `wypisz` na obiekcie `p`
    p.wypisz();
    std::cout << &p << '\n';
    
//     int a = 5;
//     {
//         int a = 4; //przysłaniamy zmienną a spoza klamerek
//         a = 17;
//         std::cout << a << '\n';
//     }
//     std::cout << a << '\n';
}
