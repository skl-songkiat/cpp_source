#include <iostream>
#include <string>

using namespace std;

int main(){
   string str;
   cout << "Enter a string : ";
   cin >> str;
   cout << str << endl;
   getline(cin, str);
   cout << str << endl;
   return 0;
}

