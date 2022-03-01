#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;

  for(int i=0; i<t; i++){
      int e,k;
      cin >> e >> k;
      int chainof = 0;
      while(e!=0){
          e = e/k;
          chainof++;
      }
      cout << chainof << endl;
  }
}