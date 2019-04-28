#include <iostream>
using namespace std;

int main(){

   unsigned long sum = 0L;
   int n, i = 1;
   cout << "Please enter n to find summation of n*n.:";
   cin >> n;
   do {
      sum += i*i;
      i++;
   }
   while (i <= n);
   cout << "Sum = " << sum;
   return 0;
}
