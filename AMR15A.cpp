#include<iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int i=0;
  int count_even=0, count_odd=0;
  while(i<t)
  {
       int num_of_weapons;
       cin >> num_of_weapons;
       cout<<" ";
       
       if(num_of_weapons%2==0)
       {
           count_even++;
       }
       else
       {
          count_odd++;
       }
       i++;
  }
    if(count_even > count_odd)
       {
           cout << "READY FOR BATTLE";
       }
    else
       {
          cout << "NOT READY";
       }
   return 0;
}