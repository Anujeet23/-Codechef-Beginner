#include<bits/stdc++.h>
using namespace std;
//#define int long long int

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        
        for (int i = 0; i < s.length(); i++)
        {   
            if((s[i]=='1') && (s[i+1]!='1')){
                count++;
            }   
        }
         
        cout << count << endl;
    }
    
}