#include <iostream>

// for (A; B; C) {
    //kod
// }
// A - wykona się 1 raz przed pętlą
// B - warunek pętli
// C - wykona się po KAŻDYM obrocie pętli
// C zostanie wykonane rówież po instrukcji continue
// Dowolną z powyższych instrukcji można pominąć.
// W szczególności "for (;;)" to pętla nieskończona
int main() {
    for (int i = 0; i < 10; i += 1) {
        std::cout << i << '\n';
    }
}
