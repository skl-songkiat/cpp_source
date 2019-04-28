#include <iostream>
using namespace std;
int main(){
   int x[] = {1,2,3,4,5};
   cout << "Detail of declearing 'int x[] = {11,12,13,14,15}'" << endl;
   cout << "Size of whole array \t=" << sizeof x << "\tbytes" << endl;
   cout << "Number of element \t= " << sizeof x / sizeof (int) << "\telement" << endl;
   cout << "Sum of each element \t= " << x[0] + x[1] + x[2] + x[3] + x[4] << endl;
   return 0;
}
 
