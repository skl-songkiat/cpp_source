#include <iostream>
using namespace std;

int main(){
   int x = 1234567890;
   cout << "Original \t Output by default" << endl;
   cout << "1234567890 \t: " << x << endl;
   bool b =1;
   cout << " 1 \t\t:" << b << endl;
   cout << " 0 \t\t:" << b << endl;
   double d0 = 0.123456;
   double d1 = 123.0;
   double d2 = 1234567890;
   double d3 = 5.142857142E22;
   cout << "0.123456 \t: " <<d0<< endl;
   cout << "123.0 \t\t:" <<d1<< endl;
   cout << "-0.1234567 \t: " <<d2<< endl;
   cout << "5.142857142E22 \t: " <<d3<<endl;
   return 0;
} 

