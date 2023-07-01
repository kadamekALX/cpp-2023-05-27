#include <iostream>
#include <string> //std::string

// #include <cstring> //strlen

//Zadanie 1: Napisz funkcję, która przyjmie napis typu std::string i zwróci informację, czy ten napis składa się tylko z cyfr
bool same_cyfry(const std::string& napis) {
    for (unsigned i = 0; i < napis.size(); i += 1) {
        if (napis[i] < '0' || napis[i] > '9')
            return false;
    }
    return true;
}

// Zadanie 2: Napisz funkcję, która zamieni w podanym napisie wielkie litery na małe
void na_male(std::string* p) {
    std::string& napis = *p;
    for (unsigned i = 0; i < napis.size(); i += 1) {
        if (napis[i] >= 'A' && napis[i] <= 'Z')
            napis[i] += 'a' - 'A';
    }
}

//Zadania domowe:
// I. napisz funkcję pokemonizer(), która przyjmie napis i litery na pozycjach parzystych zamieni na wielkie, a na pozycjach nieparzystych na małe
// pokemon -> PoKeMoN

// II. Npaisz program, który przyjmie _dowolnie długą_ liczbę i odpowie na pytanie, czy ta liczba jest podzielna przez 3.

int main() {
//     char enter = '\n';
//     const char* napis = "Hello";
//     std::cout << "dlugosc = " << strlen(napis) << '\n'; //strlen dziala liniowo!
//     char tab[] = {'M', 'a', 'm', 'a', 0};
//     char tab2[] = "Ala ma kota";
//     std::cout << napis << enter;
//     std::cout << tab << enter;
//     std::cout << tab2 << enter;
//     tab2[0] = 'E'; // to samo co tab2[0] = 69;
//     std::cout << tab2 << enter;
//     tab2[0] = tab2[0] - 4; //znaki to tak naprawdę zwykłe inty - wszelkie działania artymetyczne działają również na nich
//     std::cout << tab2 << enter;
    
    std::string s = "Ala ma kota";
    std::cout << s << '\n';
    std::cout << s[1] << '\n';
    std::cout << "Dlugosc napisu: " << s.length() << '\n'; //lub s.size()
    for (unsigned i = 0; i < s.length(); i += 1) {
        std::cout << s[i] << '\n';
    }
    std::cout << "Podaj napis: ";
    std::cin >> s; //pobiera napis do białego znaku (np. spacja!)
    std::cout << "Podales " << s << '\n';
    char k;
    k = std::cin.get();
    std::cout << "Znak >" << k << "< o wartosci " << static_cast<int>(k) << '\n';
    std::getline(std::cin, s); //pobiera cały wiersz
    std::cout << s << '\n';
    
    s += "QWERTY"; //wydłuża napis s
    
    std::cout << s << '\n';
    
    std::string s2;
    std::cin >> s2;
    std::cout << same_cyfry(s2) << '\n';
    
    std::string c;
    std::cin >> c;
    na_male(&c);
    std::cout << c << '\n';
}
