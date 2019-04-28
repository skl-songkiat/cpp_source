#include <iostream>
using namespace std;
int main(){
   const int size = 5;
   double xarr[size] = {1.1,11,100,1000.0};
   double* pxarr = xarr;
   double* pxarr2 = &xarr[2];
   cout << "xarr[0] = " << *(pxarr + 0) << "; Address of xarr[0] or pxarr + 0 = " << pxarr << " or " << xarr << endl;
   cout << "xarr[1] = " << *(pxarr + 1) << "; Address of xarr[1] or pxarr + 1 = " << &xarr[1] << " or " << pxarr + 1 << endl;
   cout << "xarr[2] = " << *(pxarr + 2) << "; Address of xarr[2] or pxarr2 = " << &xarr[2] << " or " << pxarr2 << endl; 
   cout << "xarr[3] = " << *(pxarr + 3) << "; Address of xarr[3] or pxarr2 + 1 = " << &xarr[3] << " or " << pxarr2 + 1 << endl;
   cout << "\nSize of xarr = " << sizeof xarr << " bytes." << endl; 
   cout << "Size of pxarr = " << sizeof pxarr << " bytes." << endl;
   cout << "Size of pxarr2 = " << sizeof pxarr2 << " bytes. " << endl;
   cout << "\nAssign new vale to *pxarr = 15.51\n";
  *pxarr =15.51;
   cout << " Assign new value to *(pxarr + 2) = 22.22\n";
   *(pxarr + 2) = 22.22;
   cout << "New contents of xarr" << endl;
   for (int i=0; i <size;++i)
   {
      cout << "xarr["<<i<<"] = " << xarr[i] << endl;
   } 
   return 0;
}
