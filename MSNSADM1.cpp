#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        
        int A[n],B[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            int score = (A[i] * 20) - (B[i] * 10);
            maxi = max(maxi,score);
        }
        cout << maxi << endl;
    }
    return 0;
}