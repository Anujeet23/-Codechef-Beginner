#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;
   
   while(t--){
       int n;
       cin >> n;
       int count = 0;
       for(int i=1; i<=n; i=i+2){
          int k = n - i + 1;
          count += (k*k); 
       }
       cout << count << endl;
   }
   
}