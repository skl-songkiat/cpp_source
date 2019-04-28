#include <iostream>
using namespace std; 
int main(){

   const int size = 16;
   char str[size] = "Welcome to c++!";
   char* pstr;
   pstr = &str[0];

   cout << str << endl;
   cout << pstr << endl;
   cout << "Address of str = "<< &str << endl;
   cout << "Address of pstr = " << &pstr << endl;
   
   for(int i=0;i<size;i++)
   {
      cout << *(str + i) << ' '; 
   }
   
   *(pstr + 4) = 'o';
   pstr[7] = '\0';
   
   cout << "\nNew contents of pstr = " << pstr << endl;
   cout << "New contents of str = " << str << endl;

   cout << "\nPlease enter string not more than 15 char : ";
   cin.getline(str,size);
   cout << "\nNew contents of pstr = " << pstr << endl;
   cout << "New contents of str = " << str << endl;
   
   int ncount = int(0);
   while(*pstr++)
   {
      ncount++;
   }
   cout << "The string length = " << ncount << endl;
   //char* st = "Sawasdee";
   //cout << st << endl;
   //st = str;
   //cout << st << endl;
   return 0;
} 

     


