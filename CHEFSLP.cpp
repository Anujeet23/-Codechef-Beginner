#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n,l,x;
        cin >> n >> l >> x;
        int r=n-l;
        if(r<l){
            cout << (r * x) << endl;
        }
        else{
           cout << (l * x) << endl; 
        }
    }
}