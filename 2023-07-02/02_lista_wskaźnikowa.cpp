#include <iostream>

struct Element {
    int wartosc;
    Element* nast; //Element jest zadeklarowany i niekompletny, ale to nie przeszkadza w stworzeniu wskaźnika na ten typ
};

void wypisz(const Element* lista) {
    for (const Element* e = lista; e != nullptr; e = e->nast) {
        std::cout << e->wartosc << ' ';
    }
    std::cout << '\n';
}

//dodaje nowy element na poczatku listy i zwraca adres tego elementu
Element* dodaj(Element* lista, int nowa_wartosc) {
    //stwórz nowy element (new)
    Element* nowy = new Element;
    //uzupelnij wartosc
    nowy->wartosc = nowa_wartosc;
    //uzupelnij wskaznij nast
    nowy->nast = lista;
//     zwroc adres nowego elementu
    return nowy;
}

//zwalnia pamięć zajętą przez listę
void zwolnij(Element* lista) {
    while (lista != nullptr) {
        Element* tmp = lista;
        lista = lista->nast;
        delete tmp;
    }
}

// zwraca nową pustą listę
Element* nowa_lista() {
    return nullptr;
}

// napisz funkcję zwracającą długość listy
// przerób kod tak, aby wywołanie tej funkcji działało w czasie O(1)
// 2. Napisz funkcję, która dodaje element na koniec listy

int main() {
    Element* lista = nowa_lista();
    lista = dodaj(lista, 5);
    lista = dodaj(lista, 10);
    lista = dodaj(lista, 15);
    for (int i = 0; i < 10; i += 1) {
        lista = dodaj(lista, i);
    }
    wypisz(lista); // 15 10 5
    
    zwolnij(lista); //zwalniamy pamięć
}
