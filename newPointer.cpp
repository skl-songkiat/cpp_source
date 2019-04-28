#include <iostream>
using namespace std;

int main(){
   int* px = new int ;
   *px = 10;
   cout << "a content of *px = " << *px << endl;
   cout << "size of *px = " << sizeof *px << endl;
   cout << "size of px = " << sizeof px << endl;
   long double* pld = new long double(10.5l);
   cout << "a content of * pld = " << *pld << endl;
   cout << "size of *pld = " << sizeof *pld << endl;
   cout << "size of pld = " << sizeof pld << endl;
   delete px;
   delete pld;
   pld = 0;
   delete pld;
   return 0;
}
