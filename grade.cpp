#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

   int x ;
   cout << " Please enter integer value of grade...";
   cin >> x;
   
   if(x>=0 && x<= 100){
      if(x > 80){
         cout << " your grade 'A'" << endl;
      }else if(x > 70){
         cout << " your grade 'B'" << endl;
      }else if(x > 60){
         cout << " your grade 'C'" << endl;
      }else if(x > 49){
         cout << " your grade 'D'" << endl;
      }else{
   
         cout << "your grade 'F'" << endl;
      }
   }
   return 0;
} 
 
 
 


