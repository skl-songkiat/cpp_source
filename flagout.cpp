#include <iostream>
using namespace std;

int main(){
   int x = 1234567890;
   cout << "Decimal \t=" << x << endl;
   cout << "Hexadecimal \t=" << hex << x << endl;
   cout << "Octal \t\t= " << oct << x << endl;
   cout << "Capial hex \t= " << uppercase << hex << x << endl;
   cout << nouppercase ; 
   cout << "Show sign \t= " << showpos << dec << x << endl;
   cout << noshowpos ;
   cout << "Show base 16 \t= " << showbase << hex << x << endl;
   cout << "Show base 8 \t= " << oct << x << endl;
   cout << noshowbase ; 
   bool b = 1; cout << " 1 \t\t= " << boolalpha << b<< endl;
   cout << " 0 \t\t = " << !b << endl;
   cout << noboolalpha; 

   return 0;
} 

 
