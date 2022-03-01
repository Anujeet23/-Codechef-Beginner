#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < s.length(); i = i + 2)
        {
            if((s[i] == 'A' && s[i+1] != 'B')){
                    ans = 1;
                    break;
                }
            else if((s[i] == 'B' && s[i+1] != 'A')) {
                    ans = 1;
                    break;
                }
        }
        if (ans == 1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" <<endl; 
        }
    }
}