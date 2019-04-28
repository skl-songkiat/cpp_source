#include <iostream>
using namespace std;

int main(){
   const int size = 30;
   char name1[size] , name2[size];
   cout << "Enter your name";
   cin.get(name1 ,size);
   cin.get();
   cout << "Enter your family name : ";
   cin.getline(name2,size);
   cout << "your name is " << name1 << " ";
   cout << name2 << "." << endl;
   return 0;
}
