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
            int count = 0; 
            for (int j = i+1; j < n; j++)
            {
                if(A[j]>A[i])
                {
                count++;
                }
            }
            B[i] = count;
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << B[i] << " ";
        }
        cout << endl;
    }
    return 0;
}