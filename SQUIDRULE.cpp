#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        //For finding mini num
        int mini = INT_MAX;

        for (int i=0; i < n; i++)
        {
           mini = min(A[i],mini);
        }
        //cout << "mini:" << mini << endl;
        //For index of mini num
        int index = 0; 
        for (int i = 0; i < n; i++)
        {
           if(A[i]==mini){
                index = i;
                break;
           }
        }
        A[index] = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
        }
        
          cout << sum << endl;

        }
}