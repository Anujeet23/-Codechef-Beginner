#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n,count = 0;
        cin >> n;
        while(n--){
        int S[1],J[1];
        
        cin >> S[0] >> J[0];
        int latetime = 0;
        latetime = J[0] - S[0];
            if (latetime > 5)
            {
                count++;
            }
        
    }
    cout << count << endl;
    }
    return 0;
}