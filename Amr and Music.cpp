#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a;
	cin>>b;
	int temp;
	vector<pair<int,int>> inp;
	for(int i=0;i<a;i++){
		cin>>temp;
		inp.push_back({temp,i});
	}
	sort(inp.begin(),inp.end());
	vector<int> ans;
	int count=0;
	for(int i=0;i<inp.size();i++){
		if(b>=inp[i].first) b-=inp[i].first;
		else break;
		count+=1;
		ans.push_back(inp[i].second+1);
	}
	cout<<count<<endl;
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	return 0;
}
