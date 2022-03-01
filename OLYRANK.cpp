#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;

   for(int i=0; i<t; i++){
       int G1 , S1, B1, G2, S2, B2;
       cin >> G1 >> S1 >> B1 >> G2 >> S2 >> B2;
       int sum1 = G1 + S1 + B1;
       int sum2 = G2 + S2 + B2;
       if(sum1 > sum2){
           cout << 1 << endl;
       }
       else{
           cout << 2 << endl;
       }
   }
   
}