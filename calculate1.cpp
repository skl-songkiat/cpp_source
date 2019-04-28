#include <iostream>
#include <iomanip> 

using namespace std;

int main(){
   cout << "-----" << "----------------------" << endl;
   cout << setw(5) << "x" << setw(20) << "y" << endl;
   cout << "-----" << "----------------------" << endl;
   double y;
   for(double x =-1.00; x<=3.00; x+=0.25){
      cout << fixed << showpoint ;
      if(x == 0.5){
         cout << setw(5) << setprecision(2) << x << setw(20) << " Can't divide by 0" << endl;
         continue;
      }
      y = x*x/(2*x-1)+10;
      cout << setw(5) << setprecision(2) << x << setw(20) << setprecision(3) << y << endl;
   } 
   cout << "-----" << "----------------------" << endl;
   return 0;
}      
     
