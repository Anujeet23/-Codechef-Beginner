#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    
    for(int i=0; i<t; i++){
        int n;
        cin >> n; 
        int count=0;
        while(n!=0){
        int digit;
        digit=n % 10;

        if(digit==4){
          count++;
        }
        n=n/10;
        }   
        cout << count << endl;
    }
}