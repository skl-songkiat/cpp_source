#include <iostream>
using namespace std;

int main(){
   double values, sum = 0.0;
   int i = 1;
   cout << " Please enter 5 double values to find average." << endl;
   while(i < 6){
      cout << " Enter value " << i << ":" << endl;
      cin >> values;
      sum += values;
      i++;
   }
   cout << "Average is equal to " << sum/5.0 ;
   return 0;
}
