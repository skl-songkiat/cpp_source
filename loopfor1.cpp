#include <iostream>

using namespace std;

int main(){
   cout << "Print value from 0 to 10, 10 to 0 and -5 to 5." << endl;

   for(int p=0;p<20;p++){
      cout << "-";
   }

   cout << endl;

   cout << "i\t j\t k" << endl;
   
   for(int p=0;p<20;p++){
      cout << "-"; 
   }

   cout << endl;
  
   for(int i = 0, j = 10, k = -5; i <= 10; i++ , j--, k++){
      cout << i << "\t" << j << "\t" << k << endl;
   }
  
   for(int p=0;p<20;p++){
      cout << "-"; 
   }
   cout << endl;

   return 0;
} 


