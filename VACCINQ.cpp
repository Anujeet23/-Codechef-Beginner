#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
      int n,p,x,y;
      cin >> n >> p >> x >> y;
      int time=0;
      int A[n];
      for(int i=1; i<=n; i++){
          cin >> A[i];
      }
      for(int i=1; i<=p; i++){
         if(A[i]==0){
           time = time + x;
         }
         else if(A[i]==1){
             time = time + y;
         }
      }
      cout << time << endl;
    }
}