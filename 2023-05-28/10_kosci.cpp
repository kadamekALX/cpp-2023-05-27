// Napisz program, który w nieskończoność pyta użytkownika o to co wypadnie na kostce, a następnie symuluje rzut kością 6-ścienną, porównuje wynik z zakładem użytkownika i wypisuje, czy użytkownik wygrał, czy przegrał
//rzut kością: std::rand() % 6 + 1

//Zakończ grę gdy użytkownik zgadnie wylosowaną liczbę 2 razy z rzędu

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    int wygranych_z_rzedu = 0;
    while (true) { //(wygranych_z_rzedu < 2)
        int obstawiona;
        int wylosowana;

        std::cout << "Co obstawiasz? [1-6, 0-rezygnacja] ";
        std::cin >> obstawiona;

        if (obstawiona == 0) {
            std::cout << "Do nastepnego!\n";
            break;
        }
        
        wylosowana = std::rand() % 6 + 1;
        std::cout << "Wynik rzutu: " << wylosowana << '\n';

        if (wylosowana == obstawiona) {
            std::cout << "Brawo\n";
            wygranych_z_rzedu += 1;
            if (wygranych_z_rzedu == 2) {
                std::cout << "Za dobrze Ci idzie, wypad!\n";
                break;
            }
        }
        else {
            std::cout << "Pudlo!\n";
            wygranych_z_rzedu = 0;
        }
    }
}
