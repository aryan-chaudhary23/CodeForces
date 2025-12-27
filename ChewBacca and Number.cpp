#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int a;
	cin>>a;
	long long int b=a;
	long long int ans=0;
	long long int multi=1;
	int temp;
	bool flag=true;
	while(a!=0){
		temp=a%10;
		a=a/10;
		if(a==0 && temp==9){
			ans+=temp*multi;
			break;
		}
		if(temp>4) ans+=((9-temp)*multi);
		else ans+=temp*multi;
		multi=multi*10;
		if(flag) flag=!flag;
	}
	cout<<ans;
	return 0;
}
