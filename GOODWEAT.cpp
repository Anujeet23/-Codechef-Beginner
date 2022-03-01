#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;

  for(int i=0; i<t; i++){
      int A[7];
      for(int i=0; i<7; i++){
          cin >> A[i];
      }
      int s=0,w=0;
      for(int i=0; i<7; i++){
          if(A[i]==1){
              s++;
          }
          else{
              w++;
          }
      }
      if(s>w){
          cout << "Yes" << endl;
      }
      else{
          cout << "No" << endl;
      }

  }



}