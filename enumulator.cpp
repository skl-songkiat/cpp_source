#include <iostream>
using std::cout;
using std::endl;
int main(){
   enum week {Mon, Tue, Wed, Thu, Fri, Sat, Sun};
   week day3 = week(2);
   week day5 = Fri;

   cout << "Day at 3 of week:" <<day3 << endl;
   cout << "Day at 4 of week:" << day3+1 << endl;
   cout << "Day at 5 of week:" << day5 << endl;
   cout << "last day of week:" << week(6) << endl;
   return 0;
}

