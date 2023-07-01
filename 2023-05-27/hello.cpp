#include <iostream>
//powyższy include jest potrzebny do korzystania z std::cout

// to jest komentarz
// komentarze są ignorowane przez kompilator

int main() {
    std::cout << "Hello";
    std::cout << " " << "world\n";
}

// program musi zawierac intrukcję "int main() {}". Zawartość klamerek {} będzie wykonana przy jego uruchomieniu.

//(prawie) każda instrukcja w main() musi być zakończona znakiem ;

//std::cout służy do wypisywania rzeczy do konsoli.
// Napisy umieszczamy w cudzysłowach: "napis"
// w napisach znak '\' zmienia znaczenie następnego znaku
// \n - nowy wiersz (enter)
// \\ - wstawia znak '\'
// \" - wstawia znak '"'
