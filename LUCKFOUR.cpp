#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  int i=0;

  while(i<t){
     int num,rem,count=0;
     cin >> num; cout << endl;
     
      while(num!=0){
         rem = num % 10;
        
        if(rem==4){
          count++;
         }
         num = num/10;
     }
     cout << count;
      i++;
  }
  return 0;
}