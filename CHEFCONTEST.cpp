#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  int i=0;

  while (i<t)
  { 
     //chef data
     int X,P;

     //Chefina data 
     int Y,Q;
      
      cin >> X; cout << " ";
      cin >> Y; cout << " ";
      cin >> P; cout << " ";
      cin >> Q; cout << " " << endl;
      int chef_pen=0,ina_pen=0;
      chef_pen = X + (P * 10);
      ina_pen = Y + (Q * 10);
      if (chef_pen < ina_pen){
          cout << "Chef" << endl;
      }
      else if (chef_pen > ina_pen){
          cout << "Chefina" << endl;
      }
      else{
          cout << "Draw" << endl;
      }
      i++;
  }
  return 0;
}