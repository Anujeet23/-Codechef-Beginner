#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string Fname[n];
        string Lname[n];
        
        for(int i=0; i<n; i++){
            cin >> Fname[i] >> Lname[i];
        }

        int c[n]={0};
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(Fname[i]==Fname[j]){
                    c[i]=1;
                    c[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(c[i]==1){
            cout << Fname[i] << " " << Lname[i] << endl;
            }
            else{
            cout<< Fname[i] << endl;
            }      
        }
    }
}