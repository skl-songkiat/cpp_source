#include <iostream>
using namespace std;
int main(){
   const int size = 10;
   int x[size] = {11,12,13,14,15} ;
   cout << "int x[size] = {11,12,13,14,15};" << endl;
   for (int i = 0;i < size; ++i){
      cout << "value x[" << i << "] = " << x[i] << endl;
   } 
   return 0;
}
   
