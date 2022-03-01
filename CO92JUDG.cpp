#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        
        int n;
        cin >> n;

        int A[n],B[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        //For finding maximum number
        int maxA=0;
        for (int i = 0; i < n; i++)
        {
           maxA = max(A[i],maxA);
        }
        //For index of maxx
        int indexA = 0; 
        for (int i = 0; i < n; i++)
        {
           if(A[i]==maxA){
                indexA = i;
           }
        }
        A[indexA] = 0;
    
        /*for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }*/
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }
        int maxB=0;
        for (int i = 0; i < n; i++)
        {
           maxB = max(B[i],maxB);
        }
        int indexB = 0; 
        for (int i = 0; i < n; i++)
        {
           if(B[i]==maxB){
                indexB = i;
           }
        }
        B[indexB] = 0;
        
        int SumA = 0;
        int SumB = 0;
        for (int i = 0; i < n; i++)
        {
            SumA += A[i];
            SumB += B[i];
        }

        if(SumB > SumA){
            cout << "Alice" << endl;
        }
        else if(SumB <  SumA){
            cout << "Bob" << endl;
        }
        else{
            cout << "Draw" << endl;
        }

    }
    return 0;
}
