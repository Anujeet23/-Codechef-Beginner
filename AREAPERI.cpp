#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int l,b,a,p;
	cin>>l>>b;
	a=l*b;
	p=2*(l+b);
	if(a>p)
	cout<<"Area"<<endl<<a<<endl;
	else if(a<p)
	cout<<"Peri"<<endl<<p<<endl;
	else
	cout<<"Eq"<<endl<<a<<endl;
	return 0;
}