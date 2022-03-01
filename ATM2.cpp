#include<iostream>
using namespace std;

int main(){
    int t,n,k;
    cin >> t;
    
    while (t--)
    {   cin >> n >> k;
        
        int d,ans=0;
        for (int i = 0; i < n; i++)
        {
            cin >> d;
            ans += d;
            if (ans<=k)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
                ans = ans - d;
            }
        }
        
        cout << endl;
    }
    return 0;
}