#include<iostream>
using namespace std;

void permute(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        cout << i << " " ;
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
    
    int num;

    cin >> num;

    permute(num);
    }

}