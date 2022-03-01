#include<iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int i=0;
  
  while(i<t)
  {
     int num;
     cin >> num;

     int fact=1;
     for(int i=num; i>0; i--)
     {
         fact *= i;
     } 
     i++;
     cout << fact << endl;
     
  }
  return 0;
}