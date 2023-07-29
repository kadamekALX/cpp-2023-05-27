//Wykorzystując klasę std::map napisz program, który
// w pętli nieskończonej będzie pytał użytkownika o rodzaj operacji:
// - wplac
// - wyplac
// - wypisz
//Wplata/wyplata powinna pytac użytkownika o nazwisko oraz wpłacaną/wypłacaną kwotę,
// a następnie modyfikować stan konta tej osoby
//Wypisywanie powinno wypisac na ekran stany kont wszystkich użytkowników

// std::string nazwisko;
// std::cin >> nazwisko;
// konto[nazwisko] += 100;

#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> konto;
    while (true) {
        std::string op;
        std::cin >> op;
        if (op == "wypisz") {
            for (auto it = konto.begin(); it != konto.end(); it++) {
                std::cout << it->first << ": " << it->second << "PLN\n";
            }
        }
        else if (op == "wplac" || op == "wyplac") {
            std::string nazwisko;
            int kwota;
            std::cin >> nazwisko >> kwota;
            if (op == "wplac") {
                konto[nazwisko] += kwota; //jeżeli klienta nie ma to zostanie wstawiony ze stanem konta 0, a dopiero potem zostanie to zmienione
            }
            else {
                if (konto.find(nazwisko) != konto.end())
                    konto[nazwisko] -= kwota;
                else {
                    std::cout << "Nie ma takiego konta!\n";
                }
            }
        }
    }
}
