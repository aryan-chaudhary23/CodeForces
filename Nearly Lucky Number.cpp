#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a;
	cin>>a;
	int count=0;
	while(a){
		if(a%10==4 || a%10==7) count+=1;
		a=a/10;
	}
	if(count==4 || count==7) cout<<"YES";
	else cout<<"NO";
	return 0;
}
