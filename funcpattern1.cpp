#include <iostream>
using namespace std;

int main(){
   int x;
   for(x=0;x<6;x++){
      cout << "x=" << x << "\t" << "f(" << x << ")=" << 2*x*x+x-21 << endl;
   }
   return 0; 
}
