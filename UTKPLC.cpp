#include<iostream>
using namespace std;

int main(){
   int t;
   char first,second,third,x,y;
   cin >> t;

   for(int i=0; i<t; i++){
      
        cin >> first >> second >> third;
        cin >> x >> y;
        
        if(first == x || first == y){
            cout << first << endl;
        }
        else{
           cout << second << endl;
        }        
   }
 
}