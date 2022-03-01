#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;
   int i=0;

   while(i<t){
       int num;
       cin >> num;

       if(num < 10){
           cout << "Thanks for helping Chef!" << endl;
       }
       else{
           cout << "-1" << endl;
       }
       i++;
   }
    return 0;
}