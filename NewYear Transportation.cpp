#include <bits/stdc++.h>
using namespace std;

bool ff(int start, int dest, vector<vector<int> > &adj,vector<bool> &vis){
	if(start==dest) return true;
	bool fnd=false;
	for(int i=0;i<adj[start].size();i++){
		if(!vis[adj[start][i]]){
			vis[adj[start][i]]=true;
			fnd=fnd || ff(adj[start][i],dest,adj,vis);
			vis[adj[start][i]]=false;
		}
	}
	return fnd;
}

int main(){
	int n;
	int dest;
	cin>>n;
	cin>>dest;
	dest=1;
	vector<bool> vis(n+1,false);
	vector<vector<int> > adj(n+1,vector<int>(0,0));
	int a;
	for(int i=1;i<n;i++){
		cin>>a;
		adj[i].push_back(i+a);
		
	}
	vis[1]=true;
	bool ffi=ff(1,dest,adj,vis);
	if(ffi) cout<<"YES";
	else cout<<"NO";
	return 0;
}
