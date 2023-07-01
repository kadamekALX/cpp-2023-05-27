#include <iostream>

int maks(int a, int b) {
    if (a > b)
        return a;
    return b;
}

double maks(double a, double b) {
    if (a > b)
        return a;
    return b;
}

// function overloading - możemy stworzyc funkcję o takiej samej nazwie ale innym zestawie (ilość lub typy) parametrów
// nie można napisać 2 funkcji różniących się tylko zwracanym typem
int maks(int a, int b, int c) {
    return maks(maks(a, b), c);
}

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    std::cout << maks(a, b, c) << '\n';
    std::cout << maks(3, 6) << '\n';
    std::cout << maks(3.14, 2.71) << '\n';
    return 0;
}
