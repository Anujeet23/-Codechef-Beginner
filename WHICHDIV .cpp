#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        /* code */
        int r;
        cin >> r;

        if( (2000 <=  r))
        {
          cout << "1" << endl;
        }
        else if((1600 <= r) && (r < 2000))
        {
          cout << "2" << endl;
        }
        else{
           cout << "3" << endl;
        }

    }
}