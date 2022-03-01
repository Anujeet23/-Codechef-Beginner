#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {   
        int n,s,count=0;
        cin >> n;
        while (n>0)
        {   
            s = sqrt(n);
            n = n - (s*s);
            count++;
            /* code */
        }
       cout << count << endl;
    }
      


}