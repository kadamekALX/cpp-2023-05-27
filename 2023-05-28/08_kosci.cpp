// Napisz program, który w nieskończoność pyta użytkownika o to co wypadnie na kostce, a następnie symuluje rzut kością 6-ścienną, porównuje wynik z zakładem użytkownika i wypisuje, czy użytkownik wygrał, czy przegrał
//rzut kością: std::rand() % 6 + 1

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    while (true) {
        int obstawiona;
        int wylosowana;

        std::cout << "Co obstawiasz? [1-6] ";
        std::cin >> obstawiona;

        wylosowana = std::rand() % 6 + 1;
        std::cout << "Wynik rzutu: " << wylosowana << '\n';

        if (wylosowana == obstawiona) {
            std::cout << "Brawo\n";
            break;
        }
        else {
            std::cout << "Pudlo!\n";
        }
    }
}


//Zadanie:
//Zakończ grę gdy użytkownik zgadnie wylosowaną liczbę 2 razy z rzędu
