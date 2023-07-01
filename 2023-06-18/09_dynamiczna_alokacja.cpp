#include <iostream>

int main() {
    int* p = new int; // tworzę nowego inta na stercie (heap)
    std::cout << p << '\n';
    std::cout << &p << '\n';
    *p = 123;
    std::cout << *p << '\n';

//     delete p; // zwalniamy pamięć pod adresem `p`. Od tego momentu nie możemy z niej korzystać.
    //wskaźnika `p` możemy używać dalej
    
    int n;
    std::cin >> n;
    
    p = new int[n]; // alokujemy pamięć na N intów. UWAGA: ta liczba może być zmienną
    
    for (int i = 0; i < n; i += 1) {
        std::cout << p[i] << '\n';
    }
    
    delete[] p; // pamięć zaalokowaną za pomocą new[] (tablicowy new) należy zwolnić za pomocą delete[]
// su
//  hasło: al.root
// apt install valgrind
//  Y
}
