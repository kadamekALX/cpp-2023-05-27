#include <iostream>

int main() {
    int i = 0;
    while (i < 10) {
        i += 1;
        
        if (i == 2)
            continue; //kończy obecny przebieg pętli i wraca do sprawdzenia warunku
        
        std::cout << i << '\n';
        if (i == 7)
            break; //break przerywa pętlę, niezależnie od prawdziwości warunku
    }
    std::cout << "koniec\n";
}
