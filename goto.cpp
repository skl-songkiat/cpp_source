#include <iostream> 
using namespace std;
int main(){
   int x = 100;
   cout << "x = 100" << endl;
   cout << "---------" << endl ;
   for (int i = 10;;i -= 2){
      if(i == 0){
         goto terminate;
      }
      cout << "x/" << i << " \t= " << x/i << endl;
   } 
   terminate : {
      cout << "---------" << endl;
      cout << "Can't divide by 0";
      cout << "\nBye !" << endl; 
   } 
   return 0;

}
