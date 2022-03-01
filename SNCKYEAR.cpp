#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;
   int i=0;

   while (i<t)
   {
      int num;
      cin >> num;
      if(num==2010 ||num==2015||num==2016||num==2017||num==2019 ){
          cout << "HOSTED" <<endl;
      }
      else{
          cout << "NOT HOSTED" <<endl;
      }
       i++;
   }
   return 0;
}