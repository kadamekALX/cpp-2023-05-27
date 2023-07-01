#include <iostream>

//tworzymy nowy typ o nazwie `NowyTyp`
struct NowyTyp {};

// tworzymy nowy typ, składający się z dwóch zmiennych typu int
struct Punkt {
    int x;
    int y;
};

void wypisz(const Punkt* p) {
    std::cout << (*p).x << ' ' << p->y << '\n'; //p->y to to samo co (*p).y
}

int main() {
    NowyTyp x;
    Punkt p;
    p.x = 1;
    p.y = 2;
    Punkt q;
    q.x = -3;
    q.y = 4;
    wypisz(&p);
    wypisz(&q);
}
