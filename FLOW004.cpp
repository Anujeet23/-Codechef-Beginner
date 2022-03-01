#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;
   int i=0;

   while(i<t){
       int n,sum=0;
       cin >> n;
       int last_digit;
       last_digit = n % 10;
       //cout << last_digit;
       int rem;
       while(n!=0){
           rem = n % 10;
           n = n/10;
       }
      sum = last_digit + rem;
      cout << sum << endl;
       i++;
   }
   return 0;
}