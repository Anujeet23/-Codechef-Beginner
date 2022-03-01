#include<iostream>
using namespace std;
int main(){
   int t;
   cin >> t;

   for(int i=0; i<t; i++){
      int A,B,X;
      cin >> A; cout << " ";
       cin >> B; cout << " ";
      cin >> X; cout <<endl;
      
      cout << ((B-A)/X) << endl;
   }
return 0;
}