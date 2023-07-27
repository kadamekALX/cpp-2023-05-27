#include <iostream>

using namespace std;

int main() {

    try
    {
        // kod czesc 1
        try 
        {
            // kod czesc 2 
            throw 11;
        }
        catch (int e)
        {
            cout<<"Blad "<< e <<endl;
        }
        catch (char param) 
        {
            cout<<"Blad 2 "<< param <<endl;
        }
    }
    catch (int e) {

    }

return 0;
}
