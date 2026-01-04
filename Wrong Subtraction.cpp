#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	int b;
	cin>>b;
	while(b){
		if(!(a%10)) a/=10;
		else a-=1;
		b-=1;
	}
	cout<<a;
	return 0;
}
