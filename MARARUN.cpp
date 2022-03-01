#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int D,d,A,B,C;
        cin >> D >> d >> A >> B >> C;
        int mul = d * D;
        if(10<=mul && mul<=20)
        {
            cout << A << endl;
        }
        else if(21<=mul && mul<42)
        {
            cout << B << endl;
        }
        else if(42<=mul)
        {
            cout << C << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}