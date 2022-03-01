#include<iostream>
using namespace std;

int main(){
    int t,n,k;
    cin >> t;
    
    while(t--){
        cin >> n >> k;
        int items[n];
        int lr=0;
        for (int i = 0; i < n; i++)
        {
            cin >> items[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(items[i]>k){
              lr += items[i]-k;
            }
        }
        cout << lr << endl;
    }
}