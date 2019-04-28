#include <iostream>
using namespace std;

int main(){
   const int size = 4;
   char name1[size] = "Raw";
   char name2[size];
   cout << name1 << endl;
   for(int i=0;i<size;++i)
   {
      name2[i] = name1[size-2-i];
   }
   name2[3] = '\0';
   cout << "Reverse string of" << name1 << endl;
   cout << name2 << "," << endl;
   return 0;
}

      
