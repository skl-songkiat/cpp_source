#include <iostream>
using namespace std;

int main(){
   unsigned long sum = 0L;
   int n, i = 0;
   cout << "Please enter n to find odd number : ";
   cin >> n;
   while (i < n) {
      i++;
      if(i%2 == 0){
         continue;
      }
      cout << "\t" << i;
      sum += i;
   }
   cout << "\n Summation of the above number = " << sum ;
   cout << "\n";
   return 0;
} 
