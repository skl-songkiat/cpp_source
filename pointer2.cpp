#include <iostream> 
using namespace std;
int main(){
   int x = 10;
   int* px = 0; 
   px = &x;
   cout << "Indirect value of *px \t= " << * px << endl;
   cout << "\nAssign new value to *px\t\t=200\n";
   *px = 200;
   cout << "New value of x var. \t\t= " << x << endl;  
   cout << "Address of x. (=&x) \t\t= " << &x << endl;
   cout << "Value of px var. \t\t= " << px << endl;
   cout << "Adddress of px. (=&px) \t\t= " << &px << endl;
   cout << "New indirect value of *px \t= " << *px << endl; 
   return 0;
}

   


