#include <iostream>
#include <exception>

using namespace std;

int main() {

    try 
    {
        int* tab = new int [1000];
    }
    catch (exception& e)
    {
        cout<<"Standardowy blad " << e.what() <<endl;
    }

return 0;
}
