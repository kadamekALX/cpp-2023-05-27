#include <iostream>

using namespace std;

double dzielenie(int a, int b) {
    if (b == 0) {
        throw invalid_argument("Dzielenie przez zero");
    }
    return a/b;
}

int main() {

    int x = 60;
    int y = 0;
    double z = 0;
    
    try 
    {
        z = dzielenie(x,y);
        cout<<"Wynik "<< z <<endl;
    } 
    catch (const char* message)
    {
        cout<<message<<endl;
    }



return 0;
}
