#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int cr = 0,cl = 0;

        for(int i=0; i<3; i++){
        int a;
        cin >> a;
        if(a==1){
           cr++;
        }
        else{
           cl++;
        }
        //cout << cr << endl;
        //cout << cl << endl;
        }
        if (cr>0 && cl>0)
        {
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}