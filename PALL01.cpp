#include<iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int i=0;
  
  
  while (i<t)
  {
      int  num;
      cin >> num;
      int my_num = num;
      int rem;
      int reverse=0;
      while(num!=0)    
      {    
       rem=num%10;      
       reverse=reverse*10+rem;    
       num/=10;    
     }

      if(my_num == reverse)
      {
          cout << "wins" << endl;
      }
      else
      {
          cout << "loses" << endl;
      }
      i++;
  }
  
   return 0;
}