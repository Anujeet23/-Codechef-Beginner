#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int m,n,k;
        cin >> m >> n >> k;
        int ttowatch = n*k;

        if(ttowatch<m){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}