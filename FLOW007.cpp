#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;
   int i=0;

   while(i<t){
       int n;
       cin >> n;
       cout << endl;
       int reverse=0;
       while(n!=0){
          int rem;
          rem = n % 10;
          reverse = (reverse * 10) + rem;
          n = n/10;
       }
       cout << reverse;
       i++;
   }
   return 0;
}