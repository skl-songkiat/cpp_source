#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   int x = 1234567890;
   cout << "-------" << endl;
   cout << x << endl;
   cout << "-------" << endl;
   cout << setw(10) << "12345" << endl;
   cout << setw(10) << 1234567 << endl;
   cout << "string" << endl;
   cout << setw(5) << "Sawasdee" << endl;
   cout << "------" << " ------ " << endl;
   cout << setw(10) << "Number" << setw(8) << "Serial" << endl;
   cout << "------" << " ------ " << endl;
   cout << setw(10) << 12345 << setw(7) << "AN135" << endl;
   cout << setw(10) << 23456 << setw(7) << "AN136" << endl;
   cout << "------" << " ------ " << endl;
   return 0;
} 


