#include <iostream>

//forward declaration - uprzedzamy, że będzie funkcja o takiej sygnaturze
void bar(int n);

void foo(int n) {
    if (n <= 1)
        return;
    std::cout << "foo " << n << '\n';
    bar(n - 1);
}

void bar(int n) {
    if (n <= 1)
        return;
    std::cout << "bar " << n << '\n';
    foo(n - 2);
}

int main() {
    foo(20);
}
