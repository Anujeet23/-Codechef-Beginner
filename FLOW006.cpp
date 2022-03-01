#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;
   int i=0;

   while (i<t)
   {  
       int num;
       cin >> num;
       int sum=0;

       while(num!=0){
           int rem;
           rem = num % 10;
           sum = sum + rem;
           num = num /10;
       }

       cout << sum << endl;
       i++;
   }
   return 0;
}