#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++){
        int x,m,d;
        cin >> x >> m >> d;
        int time_taken=x*m;
        int max_time=x+d;
        
        if(time_taken<=max_time){
            cout << time_taken << endl;
        }
        else{
            cout << max_time << endl;
        }
    }
}