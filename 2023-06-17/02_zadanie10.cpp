#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int ile_razy = 0;
    
    while (n / 10 != 0) // dopóki n nie jest jednocyfrowe
    {
        int suma = 0;
        while (n != 0) {
            int jednosci = n % 10;
            suma += jednosci;        
            n /= 10;
        }
        n = suma;
        ile_razy += 1;
    }
    std::cout << ile_razy << '\n';
}
