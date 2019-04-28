#include <iostream>
using namespace std;

int main(){

   int x;
   cout << "Please enter a integer value between 1 to 4 for the switch-case.: ";
   cin >> x;
   cout << "when don't have ther break statment.\n";
   switch (x){
      case 1: cout << "1\t"; break;
      case 2: cout << "2\t"; break;
      case 3: cout << "3\t"; break;
      case 4: cout << "4\t"; break;
      case 5: cout << "5\t";
      default : cout << "default";
   }return 0;
}


