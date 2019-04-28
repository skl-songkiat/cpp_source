#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

   double x;
   //cout << "Please enter x value :";
   //cin >> x;
   for(x=1;x<100;x++){ 
      int i = x * x + 10 / x;
      cout << "Result of x*x + 10/x = " << i << endl;
   }
   return 0;
}
