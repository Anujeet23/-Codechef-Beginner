#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++){
       int arr1[3],arr2[3];
        
       for(int i=0; i<3; i++){
           cin >> arr1[i];
       } 
       for(int i=0; i<3; i++){
           cin >> arr2[i];
       } 
       int sum1=0,sum2=0;
       for(int i=0; i<3; i++){
           sum1 += arr1[i];
           sum2 += arr2[i];
       }
     if(sum2==sum1){
          cout << "Pass" << endl;
         }
       else{
           cout << "Fail" << endl;
       }
    }
    return 0;
}