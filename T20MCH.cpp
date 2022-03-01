#include<iostream>

using namespace std;

int main(){
    int r,o,c;
    cin >> r >> o >> c;
    int runs_rem = r - c;
    int over_rem = 20 - o;

    if((runs_rem+1)==(36*over_rem)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}