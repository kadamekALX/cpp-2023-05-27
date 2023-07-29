#include <iostream>
#include <vector>

int main() {
    std::vector<int> tab;
    tab.push_back(10);
    tab.push_back(20);
    tab.push_back(30);
    for (unsigned i = 0; i < 10; i += 1) {
        tab.push_back(i);
        std::cout << "size = " << tab.size() << "; capacity = " << tab.capacity() << '\n';
    }
    for (unsigned i = 0; i < tab.size(); i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
    
//     for (std::vector<int>::iterator it = tab.begin(); it != tab.end(); it++)
    for (auto it = tab.begin(); it != tab.end(); it++) {
        std::cout << *it << '_';
    }
    std::cout << '\n';
    
    
    //Zadanie dodatkowe: doprowadzić klasę Tablica do stanu, który pozwoli wykorzystać ją w pętli for-each
    for (int x : tab) {
        std::cout << x << '-';
    }
    std::cout << '\n';
}
