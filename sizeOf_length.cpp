#include <iostream>
using std::cout; using std::endl;

int main(){
   short x = 32767;
   unsigned short xx = 65535;
   unsigned yy = 01234U; 
   unsigned long zz = 0x56789l;
   cout << "Short value \tx= " << x << endl;
   cout << "\nAdd 1 to x " << endl;
   x = x+1;
   cout << "Over short \tx = " << x << endl;
   cout << "Unsigned short\txx = " << xx << endl;
   cout << "\nAdd 10 to xx " << endl;
   xx = xx+10;
   cout << "Over unsigned\txx = " << xx << endl;
   cout << "Unsigned value \tyy = " << yy << endl;
   cout << "Unsigned long \tzz = " << zz << endl;
   return 0;
}
