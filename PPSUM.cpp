#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    { 
        int d,n;
        cin >> d >> n;
        
        int current = n;
        for (int i = 1; i <= d; i++)
        {
            current = ((current *(current+1))/2);
        }
        cout << current << endl;
    }
    
}