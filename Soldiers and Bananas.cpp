#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	long long total_money=a*c*(c+1)/2;
	if(total_money<=b) cout<<0;
	else cout<<abs(b-total_money);
	return 0;
}
