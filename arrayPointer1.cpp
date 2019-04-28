#include <iostream>
using namespace std;
int main(){
   const int size = 5;
   int x[size] = {11,15,19,25};
   cout << "\tUse default \n";
   cout << "Address of x[0] by x = " << x << " ; value is " << x[0] << endl;
   cout << "Address of x[1] by x+1 = " << x + 1 << " ; value is " << x[1] << endl;
   cout << "Address of x[2] by x+2 = " << x + 2 << " ; value is " << x[2] << endl;
   cout << "Address of x[3] by x+3 = " << x + 3 << " ; value is " << x[3] << endl;
   cout << "\n";
   cout << "\n\tUse operation  * and & \n ";
   cout << "Address of x[0] by &x[0] = " << &x[0] << "; value of *(x+0) is " << *(x+0) << endl;
   cout << "Address of x[1] by &x[1] = " << &x[1] << "; value of *(x+1) is " << *(x+1) << endl;
   cout << "Address of x[2] by &x[2] = " << &x[2] << "; value of *(x+2) is " << *(x+2) << endl;
   cout << "Address of x[3] by &x[3] = " << &x[3] << "; value of *(x+3) is " << *(x+3) << endl;
   return 0;
}



