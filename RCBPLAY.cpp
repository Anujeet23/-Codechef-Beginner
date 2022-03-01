#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;

  for(int i=0; i<t; i++){
      int x,y,z;
      cin >> x >> y >> z;
      int glpoint = z * 2;
      int totalpoints = x + glpoint;
      if(totalpoints>=y){
          cout << "YES" << endl;
      }
      else{
          cout << "NO" << endl;
      }


  }



}