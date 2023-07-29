#include <iostream>
#include <map>
#include <string>

//std::map<std::string, std::vector<int>> oceny

int main() {
    std::map<std::string, std::string> prezydent;
    prezydent["Polska"] = "Duda";
    prezydent["USA"] = "Biden";
    for (auto it = prezydent.begin(); it != prezydent.end(); it++) {
        std::cout << it->first << ": " << it->second << '\n';
    }
}
