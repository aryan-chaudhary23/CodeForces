#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a;
	int temp=0;
	int ans=0;
	for(int i=0;i<a;i++){
		cin>>b;
		cin>>c;
		temp-=b;
		ans=max(ans,temp);
		temp+=c;
		ans=max(ans,temp);
	}
	cout<<ans;
	return 0;
}
