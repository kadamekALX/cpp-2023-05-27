// Napisz funkcję `zamien`, która przyjmie 2 zmienne przez wskaźnik i zamieni je miejscami

// (***) nie używaj pomocniczej zmiennej

#include <iostream>

void zamien(int* a, int* b) {
    int pom = *a;
    *a = *b;
    *b = pom;
}

int main() {
    int a = 10;
    int b = 20;
    zamien(&a, &b);
    std::cout << "a = " << a << '\n'; // 20
    std::cout << "b = " << b << '\n'; // 10
}
