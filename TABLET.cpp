#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
      int n,b;
      cin >> n >> b;
      int w,h,p;
      int area = 0;

      for(int i=0; i<n; i++){
         cin >> w >> h >> p;
         
         if(p<=b){
             if((w*h)>area){
                area = w*h;
             }
         }
      }
      if(area==0)
               cout << "no tablet" << endl; 
      else
      cout << area << endl;
    }
  return 0;
} 