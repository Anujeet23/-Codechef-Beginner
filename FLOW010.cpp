#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;
   int i=0;

   while(i<t){
       char stuff;
       cin >> stuff;
       cout << endl;

       if(stuff == 'b'|| stuff == 'B'){
         cout << "BattleShip" << endl;
       }
       else if(stuff == 'c' || stuff == 'C'){
           cout << "Cruiser" << endl;
       }
       else if(stuff == 'd' || stuff == 'D'){
           cout << "Destroyer" << endl;
       }
       else if(stuff == 'f' || stuff == 'F'){
           cout << "Frigate" << endl;
       }
       i++;
   }
     return 0;
}