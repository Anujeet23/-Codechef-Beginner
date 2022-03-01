#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  int i=0;

  while(i<t){
       int P, M, V;
       cin >> P; cout << " ";
       cin >> M; cout << " ";
       cin >> V; cout << " " << endl;
       int E_E=0;
       if(P>1)
       {
       E_E = (M-(P-1)) * V;
       cout << E_E << endl;
       }
       else
       {
       cout << M * V <<endl;
       }

       i++;
  }
   return 0;
}