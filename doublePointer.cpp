#include <iostream>
using namespace std;

int main(){
   double x = 555;
   double* px;
   double** ppx;
   double*** pppx;

   px = &x;
   ppx = &px;
   pppx = &ppx;

   cout << "x \t\t= " << x << ", address of x = " << &x << ", Value of x = " << x << endl;
   cout << "*px \t\t= " << *px << ", address of px = " << &px << ", Value of px = " << px << endl;
   cout << "**ppx \t\t= " << **ppx << ", address of ppx = " << &ppx << ", Value of ppx = " << ppx << endl;
   cout << "***pppx \t\t= " << ***pppx << ", address of pppx = " << &pppx << ", Value of pppx = " << pppx << endl;

   cout << "\nAssign new value to ***pppx = 111.111\n";
   ***pppx = 111.111; 
   
   cout << "Now value of x = " << x << endl;
   cout << "Now indirect value of *px = " << *px << endl;
   cout << "Now indirect value of **ppx = " << **ppx << endl;
   return 0;
} 
 





