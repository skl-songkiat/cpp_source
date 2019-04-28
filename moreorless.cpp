#include <iostream>

using std::cout;
using std::endl;

using std::cin;

int main(){

   int x;
   cout << "Please enter integer value:";
   cin >> x;
   if(x>0){
      cout << " your data is more than 0";
      cout << " ; data is " << x << endl;
   }
   else
   {
      cout << " your data is less then 0";
      cout << " ; data is " << x << endl;
   }
   return 0;
}
