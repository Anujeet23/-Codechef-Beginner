#include<iostream>
using namespace std;

int main()
{
   int t;
   cin >> t;
   for(int i=0; i<t; i++){
      int arr[5];

      for(int i=0; i<5; i++){
          cin >> arr[i];
          cout << " ";
      }
      int C_1=0,C_2=0;
      for(int i=0; i<5; i++){
          if(arr[i]==1)
          {
            C_1++;
          }
          else if(arr[i]==2){
              C_2++;
          }
      }    
      if(C_2<C_1){
          cout << "INDIA" << endl;
      }
      else if(C_2>C_1){
          cout << "ENGLAND" << endl;
      }
      else{
          cout << "DRAW" << endl;
      }

      cout << endl;
   }

}