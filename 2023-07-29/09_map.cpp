#include <iostream>
#include <map>
#include <string>

//std::map<std::string, std::vector<int>> oceny

int main() {
    std::map<std::string, std::string> prezydent;
    prezydent["Polska"] = "Duda";
    prezydent["USA"] = "Biden";
    for (auto it = prezydent.begin(); it != prezydent.end(); it++) {
        std::cout << it->first << ": " << it->second << '\n';
    }
}

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
