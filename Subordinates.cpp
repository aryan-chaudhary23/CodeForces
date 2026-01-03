#include<bits/stdc++.h>
using namespace std;

int dfs(int a,vector<int> &ans,vector<vector<int> > &adj){
	int count=0;
	for(int i=0;i<adj[a].size();i++){
		count+=1+dfs(adj[a][i],ans,adj);
	}
	return ans[a]=count;
}

int main(){
	int a;
	cin>>a;
	vector<vector<int> > adj(a,vector<int>(0,0));
	int temp;
	for(int i=1;i<a;i++){
		cin>>temp;
		adj[temp-1].push_back(i);
	}
	vector<int> ans(a,0);
	temp=dfs(0,ans,adj);
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	return 0;
}
