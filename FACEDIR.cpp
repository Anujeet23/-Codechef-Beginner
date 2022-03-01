#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int x;
        cin >> x;
        if(x==1 || x%4==1){
            cout << "East" << endl;
        }
        else if(x==2 || x%4==2){
            cout << "South" << endl;
        }
        else if(x==3 || x%4==3){
            cout << "West" << endl;
        }
        else {
            cout << "North" << endl;
        }
    }
}