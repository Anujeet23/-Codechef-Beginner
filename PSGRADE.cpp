#include<iostream>
using namespace std;

int main()
{
   int t;
   cin >> t;
   int i = 0;

   while(i<t){
      int Amin,Bmin,Cmin,Tmin,A,B,C;
      cin >> Amin; 
      cout<<" ";
      cin >> Bmin; 
      cout<<" ";
      cin >> Cmin; 
      cout<<" ";
      cin >> Tmin; 
      cout<<" ";
      cin >> A; 
      cout<<" ";
      cin >> B; 
      cout<<" ";
      cin >> C;

      if( A >=Amin && B >= Bmin && C >= Cmin && A+B+C >= Tmin)
      {
         cout << "Yes";
      }
      else{
          cout << "No";
      }
       i++;
   }
     return 0;
}