#include <iostream>
#include <string>
#include <algorithm>

class Osoba {
public:
    Osoba(const std::string& imie, int wzrost) {
        this->imie = imie;
        this->wzrost = wzrost;
    }
    
    void wypisz() const {
        std::cout << imie << ", " << wzrost << "cm\n";
    }
    
    int getWzrost() const {
        return wzrost;
    }
    
private:
    std::string imie;
    int wzrost;
};

//zwraca true jesli a < b
bool porownywator(const Osoba& a, const Osoba& b) {
    return a.getWzrost() < b.getWzrost();
}

int main() {
    Osoba tab[4] = {{"Adam", 178}, {"Jan", 175}, {"Rufus", 192}, {"Ania", 165}};
    
    std::sort(tab, tab + 4, porownywator); // std::sort wykorzysta funkcję porownywator to porównania elementów
//     std::sort(tab, tab + 4, [](const Osoba& a, const Osoba& b){return a.getWzrost() < b.getWzrost();}); //to samo, ale z wykorzystaniem funkcji anonimowej
    
    for (int i = 0; i < 4; i += 1) {
        tab[i].wypisz();
    }
    
    std::cout << porownywator << '\n';
}
