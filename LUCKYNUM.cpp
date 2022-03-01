#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++){
        int A,B,C;
        cin >> A; cout << " ";
        cin >> B; cout << " ";
        cin >> C; cout << " ";

        if(A==7 || B==7 || C==7){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
return 0;
}