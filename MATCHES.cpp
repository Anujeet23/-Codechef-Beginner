#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
       int a,b;
       cin >> a >> b;
       int sum = a + b;
       //cout << "This is sum:" << sum << endl;
       int count=0; 
       while(sum!=0){

           int check = sum % 10;
           //cout << "This is check: " << check << endl;
           switch (check)
           {
           case 0:
               count = count + 6;
               break;
           case 1:
               count = count + 2;
               break;
           case 2:
               count = count + 5; 
               break;  
           case 3:
               count = count + 5;
                break;
           case 4:
               count = count + 4; 
               break;
           case 5:
               count = count + 5;
                break;
           case 6:
               count = count + 6;
                break;
           case 7:
               count = count + 3;
               break;
           case 8:
               count = count + 7;
               break;
           case 9:
               count = count + 6; 
               break;           
           }
           sum = sum / 10;
          // cout << "This is count:" << count << endl;
       }
      cout << count << endl;
    }
}