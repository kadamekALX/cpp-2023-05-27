#include <iostream>

int main() {
    int x;
    std::cin >> x;
//     int potega = 1;
//     for (int i = 0; i < x; i += 1) {
//         std::cout << potega << '\n';
//         potega *= 2;
//     }
    if (x == 0)
        std::cout << 1 << '\n';
    else {
        int m = x % 4;
        switch (m) {
            case 0:
                std::cout << 6 << '\n';
                break;
            case 1:
                std::cout << 2 << '\n';
                break;
            case 2:
                std::cout << 4 << '\n';
                break;
            case 3:
                std::cout << 8 << '\n';
                break;
            default: // jesli nie pasuje do żadnego case
                break;
        }
    }
}
