#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int Sumeven = 0;
    for (int i = 0; i < n; i=i+2)
    {
        Sumeven += arr[i];
    }
    int Sumodd = 0;
    for (int i = 1; i < n; i=i+2)
    {
        Sumodd += arr[i];
    }
        
        if(Sumodd > Sumeven){
            cout << (Sumeven) * 2  << endl;
        }
        else{
            cout << (Sumodd) * 2  << endl;
        }
        
}