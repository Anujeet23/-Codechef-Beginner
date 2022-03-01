#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int d,x,y,z;
        cin >> d >> x >> y >> z;
        int x_h = x * 7;
        int y_h = y * d;
        int z_h = (7-d) * z;
        int y_z = y_h + z_h;
        if(x_h > y_z){
            cout << x_h << endl;
        }
        else{
            cout << y_z << endl;
        }
    }
}