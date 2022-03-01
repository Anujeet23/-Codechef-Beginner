#include<iostream>
using namespace std;

bool isPrime(int sum)
{
    if(sum<=1) return false;

    for (int i = 2; i < sum; i++)
    {
        if (sum%i==0)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x,y;
        cin >>  x >> y;
        int sum = x + y;
        for (int i = 1; i < 200; i++)
        {
            sum += 1;
            if(isPrime(sum))
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}