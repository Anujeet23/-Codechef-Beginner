#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        
            cin >> s;
        
        
        int count_p = 0,count_c = 0,count_m = 0;
        for (int i = 0; i < 3; i++)
        {
            if(s[i] == 'P'){
                count_p++;
            }
            else if (s[i] == 'C')
            {
                count_c++;
            }
            else if (s[i] == 'M')
            {
                count_m++;
            }
        }
        if(count_p==1 && count_c==1 && count_m==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
}