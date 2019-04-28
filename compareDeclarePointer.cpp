#include <iostream>
using namespace std; 

int main(){
   int x = 10, y = 0, z = 30;
   int* xarrp[] = {&x,&y,&z};
   cout << "Address of x var. is " << &x << endl;
   cout << "Address of y var. is " << &y << endl;
   cout << "Address of z var. is " << &z << endl;
   cout << "\nPrint the contents and indirect values of xarrp\n";
  
   for(int i=0;i<3;i++){
      cout << "xarrp["<<i<<"]"<<"\t";
   }
   cout << endl;
  
   for(int i=0;i<3;i++){
      cout << xarrp[i] << "\t";
   }
   cout << endl;
   
   for(int i=0;i<3;i++){
      cout << *xarrp[i] << "\t\t";
   }
   cout << endl;  
   
   for(int i=0;i<3;i++){
      cout << "The address of xarrp["<<i<<"] are " << &xarrp[i] << endl;
   }
   cout << endl;
  
   const int size = 3;
   char sa[] = "He", sb[] = "is" ,sc[] = " a boy";
   char* strp[size];
   cout << "Address of sa var. is " << &sa << endl;
   cout << "Address of sb var. is " << &sb << endl;
   strp[0] = sa;
   strp[1] = &sb[0];
   strp[2] = sc;
   for(int i = 0;i<size;i++){
      cout << "The address of strp["<<i<<"] are " << & strp[i] << "and indirect value are " << *(strp + i) << endl;
   }
   return 0;
}
   
