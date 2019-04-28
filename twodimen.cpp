#include <iostream>
#include <iomanip>
using namespace std;
int main(){

   const int sizeCol = 3;
   double ma[][sizeCol] = {
                            {1.1,1.2,1.3},
                            {2.1,2.2}
                          };
   cout << "Size of whole array \t=" << sizeof ma << " \tbytes" << endl;
   cout << "Number of total element\t=" << sizeof ma/sizeof(double) << "\telements" <<endl;
   cout << fixed << showpoint << setprecision(1);
   for (int i=0;i<2;++i)
      for(int j=0;j<sizeCol;++j)
         cout << "value ma[" << i<< "]["<<j<<"]= " << ma[i][j] << endl;
   return 0;
}
