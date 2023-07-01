//Napisz program, który policzy ile jest liczb podzielnych przez 3 lub przez 7 w przedziale 0-200

#include <iostream>

int main() {
    int ile_podzielnych = 0;
    for (int i = 0; i <= 200; i += 1) {
        if (i % 3 == 0 || i % 7 == 0) {
            ile_podzielnych += 1;
        }
    }
    
    std::cout << "W przedziale [0; 200] znajduje sie " << ile_podzielnych << " liczb podzielnych przez 3 lub 7\n";
}
