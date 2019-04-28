#include <iostream>
#include <iomanip>
using namespace std;
int main(){
   const int sizeRow = 3, sizeCol = 3;
   float sum =0.0;
   float ma [sizeRow][sizeCol];
   cout << "Please enter vales for a 3x3 matrix " << endl;
   for (int i=0;i<sizeRow;++i){
      for(int j=0;j<sizeCol;++j){
         cout << "value ma["<<i<<"]["<<j<<"]:";
         cin >> ma[i][j];
      }
   }
   cout << fixed << showpoint << setprecision(1);
   cout << "Content of 2-d array : " <<endl;
   for (int i=0;i<sizeRow;++i){
      for(int j=0;j<sizeCol;++j){
         cout << ma[i][j] << "\t";
         sum += ma[i][j] ;
      }
   cout << endl;
   }
   cout << setprecision(2);
   cout << "Sum of 2-d array =" << sum << endl;
   return 0;
}
