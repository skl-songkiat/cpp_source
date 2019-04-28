#include <iostream>
using namespace std; 
int main(){
   int x=10;
   int* px=0; 
   px = &x;
   cout << "Value of x var. \t= " << x << endl;
   cout << "Address of x (=&x)\t= " << &x << endl;
   cout << "Value of px var. \t= " << px << endl;
   cout << "Address of px (=&px)\t= " << &px << endl;
   cout << "Value of *px \t\t=" << * px << endl;
   return 0;
}
