#include <iostream>

using namespace std;


int main() {
    
   int tablica[3] = {99,1,2};
   
   cout<< *tablica;
    
    
   int tab[2][3];
   
    
   int * tab2 = new int[4];
   delete [] tab2;
   
   int ** tab3 = new int * [4];
   tab3[0] = new int [3];
   tab3[1] = new int [1];
   tab3[2] = new int [2];
   tab3[3] = new int [4];
   
   
//   int wymiar[] = {2,3,1,2};
//   for (int i = 0; i < 4; i ++)
//   {
//     tab3[i] = new int[wymiar[i]];
//   }

   /*
   X X X X
   X - X X
   X - - X
   - - - X
   */
   
   delete [] tab3[0];
   delete [] tab3[1];
   delete [] tab3[2];
   delete [] tab3[3];
   delete [] tab3;
    
   cout<<""<<endl;
    
    
   return 0;
}
