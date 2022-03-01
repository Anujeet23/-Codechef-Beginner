#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n,x,y;
        cin >> n >> x >> y;

        int capacity = (n+1) * y;
        if(capacity >= x){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}