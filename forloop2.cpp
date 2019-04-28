#include <iostream>
using namespace std;
int main(){
   cout << "Use break for 'for loop'; when less then 0." << endl;
   int i =10;
   for(;;i--){
      cout << " " << i;
      if(i <= 0){
         cout << "\nNow i is " << i << ",less than or equal to 0." << endl;
         break; 
      }
   }
   cout << "Exit from for loop.";
   return 0;
} 
