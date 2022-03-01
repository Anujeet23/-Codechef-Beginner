#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        //No Two friends should get same number of cookie,
        // 1 2 3 4 5 6 LOGIC
         if(n>=21){
           cout << "Yes" << endl;
        }
          else{
              cout << "NO" << endl;
          }
    }
}

