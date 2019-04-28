#include <iostream>
using std::cout;
using std::endl;
int main()
{
   cout << "signed int:" << endl;
   cout << "\tsigned char\t = " << sizeof(signed char) << "bytes." << endl;
   cout << "\tchar\t\t= " << sizeof(char) << "bytes." << endl;
   cout << "\tbool\t\t= " << sizeof(bool) << "bytes." << endl;
   cout << "\tshort int\t= " << sizeof(short) << "bytes." << endl;
   cout << "\tint \t\t= " << sizeof(int) << " bytes." << endl;
   cout << "\tlong int\t= " << sizeof(long) << "bytes." << endl;
   cout << "\nUnsigned int : " << endl;
   cout << "\tunsigned char\t= " << sizeof(unsigned char) << " bytes." << endl;
   cout << "\tunsigned short\t= " << sizeof(unsigned short) << "bytes." << endl;
   cout << "\tunsigned int\t= " << sizeof(unsigned int) << "bytes." << endl;
   cout << "\tunsigned long\t= " << sizeof(unsigned long) << "bytes." << endl;
   cout << "\nFloating-Point: " << endl;
   cout << "\tfloat\t\t= " << sizeof(float) << "bytes." << endl;
   cout << "\tdouble\t\t= " << sizeof(double) << "bytes." << endl;
   cout << "\tlong double\t= " << sizeof(long double) << "bytes." << endl;
   return 0;
}
