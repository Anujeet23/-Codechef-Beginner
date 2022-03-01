#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;

   for(int i=0; i<t; i++){
       int H,x,y,C;
       cin >> H >> x >> y >> C;
       int total = x + (y/2);
       int total_H = total * H;
       if(total_H <= C){
           cout << "YES" << endl;
       }
       else{
           cout << "NO" << endl;
       }
   }

}