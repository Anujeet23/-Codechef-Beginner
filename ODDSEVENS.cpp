#include<iostream>
using namespace std;
int main(){
   int t;
   cin >> t;

   for(int i=0; i<t; i++){
       int a,b;
       cin >> a >> b;
       int sum = a+b;
       
       if(sum%2==0){
           cout << "Bob" << endl;
       }
       else{
           cout << "Alice" << endl;
       }
   }
}