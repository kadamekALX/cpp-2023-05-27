#include <iostream>

int main() {
    int n = 0;
    int m = 0;
    std::cin >> n >> m;
    for (int wie = 0; wie < n; wie += 1) {
        for (int kol = 0; kol < m; kol += 1) {
//             std::cout << (wie + kol) % 2;
            if ((wie + kol) % 2 == 0) {
                std::cout << '0';
            }
            else {
                std::cout << '1';
            }
        }
        std::cout << '\n';
    }
}
