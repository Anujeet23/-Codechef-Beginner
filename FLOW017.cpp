#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;
   int i=0;

   while(i<t)
   {

       int A, B, C;
       cin >> A;
       cout << " ";
       cin >> B;
       cout << " ";
       cin >> C;
       cout << endl;

       int greatest,smallest;
       if( A>B && A>C )
       {
          greatest = A;
          if(B>C){
              cout << B << endl;
          }
          else{
              cout << C << endl;
          }
       }
       else if(B>A && B>C)
       {
           greatest = B;
           if(A>C){
               cout << A << endl;
           }
           else{
               cout << C << endl;
           }
       }
       else
       {
           greatest = C;
           if(A>B){
               cout << A << endl;
           }
           else{
               cout << B << endl;
           }
       }
       i++;
   }
      return 0;
}