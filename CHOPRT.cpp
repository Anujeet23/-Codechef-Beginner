#include<iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int i=0;

  while(i<t)
  {
    int a,b;
    cin >> a; cout<<" "; cin >> b;
    if(a<b){
        cout << "<" << endl;
    }
    else if(a>b){
        cout << ">" << endl;
    }
    else{
        cout << "=";
    }

     i++;
  }
  return 0;
}