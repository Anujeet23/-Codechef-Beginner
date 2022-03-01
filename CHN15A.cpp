#include<iostream>
using namespace std;

int main(){
   int t;
   cin >> t;
   int i = 0;

   while(i<t)
   {  
      int n;
      cin >> n; 
      cout << " ";
      int arr[n],k;
      cin >> k;
      cout << endl;
      
      for(int i=0; i<n; i++){
          cin >> arr[i];
          cout << " ";
          
      } 
       int newarr[n];
      for(int i=0; i<n; i++){
          newarr[i] = arr[i] + k;
      } 
      int count = 0;
      for(int i=0; i<n; i++){
         if(newarr[i] % 7 ==0){
             count++;
         }
      } 
      cout << count ;
      i++;
   }

}