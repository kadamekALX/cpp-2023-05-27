//Zgadywanka
//Napisz program, który wylosuje liczbę z przedziału
// 1-1000000, a następnie każe użytkownikowi zgadnąć tą liczbę. 
//Poprawny strzał powinien kończyć program z komunikatem "Brawo".
//Po pudle program powienien wypisać "Za malo"/"Za duzo" i wrócić do pytania o liczbę

//https://students.alx.pl/~kadamek/cpp/2023-05-27/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    int wylosowana = std::rand() % 1000000 + 1;
    
    while (true) {
        std::cout << "Zgaduj:";
        int strzal = 0;
        std::cin >> strzal;
        
        if (strzal == wylosowana) {
            std::cout << "Brawo!\n";
            break;
        }
        else if (strzal < wylosowana) {
            std::cout << "Za malo!\n";
        }
        else {
            std::cout << "Za duzo!\n";
        }
    }
}
