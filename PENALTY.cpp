#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
        cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10;
	    int a=a1+a3+a5+a7+a9;
	    int b=a2+a4+a6+a8+a10;
        
        if(a>b){
           cout << 1 << endl;
           }
        else if(a<b){
           cout << 2 << endl;
           }
        else{ 
           cout << 0 << endl;
           }
    }
    return 0;
}