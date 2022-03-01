#include<iostream>
using namespace std;
 
 int main(){
     int t;
     cin >> t;

     for(int i=0; i<t; i++){
         int k;
         cin >> k;
         int by_2 = k/2;
         int result_by2= by_2 * 2;
         if(k%2==0){
             cout << result_by2 << endl;
         }
         else{
             cout << (result_by2 + 3) << endl;
         }
     }
 }