#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;

  for(int i=0; i<t; i++){
    int Sa,Sb,Sc;
    cin >> Sa >> Sb >> Sc;

    if(Sa<Sb && Sa<Sc){
        cout << "Draw" << endl;
    }
    else if(Sb<Sa && Sb<Sc){
        cout << "Bob" << endl;
    }
    else{
        cout << "Alice" << endl;
    }
  }

}