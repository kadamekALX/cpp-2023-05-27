#include <iostream>

struct Element {
    int wartosc;
    Element* nast;
};

void wypisz(const Element* lista) {
    for (const Element* e = lista; e != nullptr; e = e->nast) {
        std::cout << e->wartosc << ' ';
    }
    std::cout << '\n';
}

using Lista = Element*;

void dodaj(Lista* lista, int nowa_wartosc) {
    Lista nowy = new Element;
    nowy->wartosc = nowa_wartosc;
    nowy->nast = *lista;
    *lista = nowy;
}

void zwolnij(Element* lista) {
    while (lista != nullptr) {
        Element* tmp = lista;
        lista = lista->nast;
        delete tmp;
    }
}

Element* nowa_lista() {
    return nullptr;
}

int main() {
    Element* lista = nowa_lista();
    dodaj(&lista, 5);
    dodaj(&lista, 10);
    dodaj(&lista, 15);
    dodaj(&lista, 20);
    
    wypisz(lista); // 15 10 5
    
    zwolnij(lista); //zwalniamy pamięć
}
