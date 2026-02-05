#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	int temp;
	vector<int> ans(a,0);
	for(int i=0;i<a;i++){
		cin>>temp;
		ans[temp-1]=i+1;
	}
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	return 0;
}
