#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
      int n,x;
      cin >> n >> x;
      int s,r;
      int maxi = INT_MIN;

      for(int i=0; i<n; i++){
         cin >> s >> r;
         if(s<=x){
           if(r>maxi){
               maxi =r;
           }
         }     
      }

      cout << maxi << endl;
    }
    return 0;
}