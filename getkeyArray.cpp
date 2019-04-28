#include <iostream>
using namespace std;
int main(){

   const int size = 10;
   int x[size];
   cout << "Please enter 10 value" << endl;
   for (int i=0; i<size && cin >> x[i]; ++i){
      ;
   }
   
   for (int i=size;i>=0;--i){
      cout << x[i] << "\t";
   } 
   return 0;
}
