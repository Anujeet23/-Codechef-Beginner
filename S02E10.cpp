#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;

   for(int i=0; i<t; i++){
        int N,X,K,count=0;
        cin >> N >> X >> K;
        
        int A[N],B[N];
        for(int i=0; i<N; i++){
            cin >> A[i];
        }
    
        for(int i=0; i<N; i++){
            cin >> B[i];
        }
        for(int i = 0; i<N; i++){
    if (abs (A[i] - B[i])<= K)
    count++;
    
   }
    if (count>=X){
    cout<<"YES"<<endl;}
    else{
    cout<<"NO"<<endl;}
   }
}
    
        
