#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i=0;

    while(i<t)
    {
        int A,B,C;

        cin >> A; cout << " ";  cin >> B; cout << " ";  cin >> C; cout << " "; 

        if(A+B+C == 180)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        i++;
    }
    return 0;
}