#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    while (t--)
    {
        string s;
        cin >> s;
        int counta = 0,countb = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'a'){
                counta++;
            }
            else{
                countb++;
            }
        }
        if(counta > countb ){
            cout << countb << endl;
        }
        else if(counta < countb ){
            cout << counta << endl;
        }
        else if(counta == 0 || countb == 0 ){
            cout << "0" << endl;
        }
        else{
            cout << countb << endl;
        }
    }
    }