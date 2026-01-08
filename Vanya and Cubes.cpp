#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	if(a==1){
		cout<<1;
		return 0;
	}
	int count=1;
	int ans=0;
	while(ans<a){
		ans+=(count)*(count+1)/2;
		count+=1;
	}
	if(ans==a) cout<<count-1;
	else cout<<count-2;
	return 0;
}
