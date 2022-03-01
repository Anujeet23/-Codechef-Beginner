#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n,x,p;
        cin >> n >> x >> p;
        int marks = (x*3) + ((n-x)* (-1));
        if(marks>=p){
            cout << "Pass" << endl;
        }
        else{
            cout << "Fail" << endl;
        }
    }
}