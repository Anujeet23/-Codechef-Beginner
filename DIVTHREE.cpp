#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
  // Remember to take care of constraints.
    while (T--)
    {  
        int N,K,D;
        cin >> N >> K >> D;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        int Total_Problems=0,count=0;
        for (int i = 0; i < N; i++)
        {
           Total_Problems += a[i];
        }
        count = Total_Problems/K;
        if(count >= D){
             cout << D << endl;
        }
        else{
            cout << count << endl;
        }
    }

}