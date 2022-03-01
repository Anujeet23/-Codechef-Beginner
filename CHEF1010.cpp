#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int c_1 = 0, c_0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                c_1++;
            }
            else
            {
                c_0++;
            }
        }
        if (c_1 == 0 || c_0 == 0)
        {
            cout << 0 << endl;
        }
        else{
            cout << (min(c_1,c_0)-1) << endl;
        }
        
    }
    
}