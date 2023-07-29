#include <iostream>
#include <list> //lista wskaźnikowa

int main() {
    std::list<int> lista;
    lista.push_back(10);
    lista.push_front(20);
    lista.push_front(30);
    auto it = lista.begin();
    it++;
    lista.insert(it, 123);
    for (int x : lista) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
}
