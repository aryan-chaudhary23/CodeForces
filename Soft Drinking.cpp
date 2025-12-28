#include<bits/stdc++.h>
using namespace std;

int main(){
	long int a,b,c,d,e,f,g,h;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	cin>>f;
	cin>>g;
	cin>>h;
	long int total_drink=b*c; //60
	long int total_slices=d*e; //80 //100 //nl=3 //np=1
	long int count=0;
	long int toasts=min(total_drink/g,min(f/h,total_slices));
	cout<<toasts/a;
	return 0;
}
