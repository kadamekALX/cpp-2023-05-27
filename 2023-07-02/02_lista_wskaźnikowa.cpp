#include <iostream>

struct Element {
    int wartosc;
    Element* nast; //Element jest zadeklarowany i niekompletny, ale to nie przeszkadza w stworzeniu wskaźnika na ten typ
};

void wypisz(const Element* lista) {
    
}

//dodaje nowy element na poczatku listy i zwraca adres tego elementu
Element* dodaj(Element* lista, int nowa_wartosc) {
    
}

//zwalnia pamięć zajętą przez listę
void zwolnij(Element* lista) {
    
}

// zwraca nową pustą listę
Element* nowa_lista() {
    return nullptr;
}

// using Lista = Element*;

int main() {
    Element* lista = nowa_lista();
    lista = dodaj(lista, 5);
    lista = dodaj(lista, 10);
    lista = dodaj(lista, 15);
    wypisz(lista); // 15 10 5
    
    zwolnij(lista); //zwalniamy pamięć
}
