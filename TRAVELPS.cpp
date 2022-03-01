#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n,a,b;
        int p=0;
        

        cin >> n >> a >> b;
        
        char s[n];
        for(int i=0; i<n; i++){
            cin >> s[i];
        }

        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                p++;
            }
            
        }
        cout << p*a + b*(n-p) << endl;
    }
}