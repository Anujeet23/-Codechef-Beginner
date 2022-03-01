#include<iostream>
using namespace std;
int main(){
     int t;
     cin >> t;
     for(int i=0; i<t; i++){
         int xa,xb,Xa,Xb;
         cin >> xa >> xb >> Xa >> Xb;
         int water= Xa/xa;
         int pulp= Xb/xb;
         int total = water + pulp;

         cout << total << endl;

     }


}