#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int i=0;

    while(i<t){
        int H, T_S;
        float C_C;
        cin >> H;
        cout << " ";
        cin >> C_C;
        cout << " ";
        cin >> T_S;
        cout << endl;

        if(H>50 && C_C<0.7 && T_S >5600){
            cout << "10" << endl;
        }
        else if(H >50 && C_C <0.7){
            cout << "9" << endl;
        }
        else if(C_C<0.7 && T_S >5600){
            cout << "8" << endl;
        }
        else if(H>50 && T_S >5600){
            cout << "7" << endl;
        }
        else if(H>50 || C_C<0.7 || T_S >5600){
            cout << "6" << endl;
        }
        else{
            cout << "5";
        }

        i++;
    }
    return 0;
}