#include <iostream>
using namespace std;
int main(){
   const int size = 5; 
   int x[size] = {10,20,30,40};
   int * px = x ;
   cout << "Content of the array x andress : " << endl;
   for (int i = 0;i<size;++i){
      cout << "x[" << i << "] = " << x[i] << "\t";
   }

   for (int i = 0; i<size;++i){
      cout << " " << &x[i] << "\t";
   }
  
   cout << "\n Now begin at address " << px << endl;
   cout << "indirect value of * px by *px++ = " << *px++ << "\n";
   cout << "indirect value of * px after incresement = " << *px << " or value of x[1]." << endl;
   cout << "indirect value of * px by *px-- = " << *px-- << "\n";
   cout << "indirect value of *px after decresement = " << *px << " or value of x[0]." << endl;
   cout << "\n\nindirect value of *px by (*px)++ = " << (*px)++ << endl;

   cout << "indirect value of *px by ++(*px) = " << ++(*px) << endl; 
   cout << "\n Now begin at address " << px << endl;
   
   px = px + 2;
   cout << "indirect value of *px  by px +2 " << *px << " or value of x[2]." << endl;
   cout << "Address of px of px++ = " << px++ ; 
   cout << "; new adress of px after inc. = " << px << "\n" << "and the indirect valur is " << *px << "or value of x[3] " << endl;
   cout << "indirect value of *px by (*px)-- = " << (*px)-- << "\n";
   cout << "\n\n New content of x " << endl;
   for (int i = 0; i < size ; ++i)
      cout << "x[" << i << "] = " <<x[i]<<"\t";
   return 0;
}

 

 



