#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n,k,d,p;
        cin >> n >> k;
        if(n%k==0){
            d = n/k;
            p = k;
        }
        else{
            d = (n/k) + 1;
            p = (n%k);
        }
        cout << d << " " << p << endl;
    }
    return 0;
}