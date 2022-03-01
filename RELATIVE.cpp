#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
       
       int c,g;
       cin >> g >> c;
       
       int height = (c*c)/(2*g);
        
       cout << height << endl;
    }
}