#include<bits/stdc++.h>
using namespace std;

bool solve(int start, int i,vector<vector<int> > &adj,vector<bool> &path,int count){
	bool ans=false;
	for(int j=0;j<adj[i].size();j++){
		if(count==2 && adj[i][j]==start){
			ans=ans||true;
			break;
		}
		if(!path[adj[i][j]]){
			path[adj[i][j]]=true;
			ans= ans || solve(start,adj[i][j],adj,path,count+1);
			path[adj[i][j]]=false;
		}
	}
	return ans;
}

int main(){
	int size;
	cin>>size;
	vector<int> edges(size,-1);
	for(int i=0;i<size;i++) cin>>edges[i];
	if(size==2){
		cout<<"NO";
		return 0;
	}
	vector<vector<int> > adj(size,vector<int>(0,0));
	vector<bool> vis(size,false);
	for(int i=0;i<size;i++) adj[i].push_back(edges[i]-1);
	bool temp;
	for(int i=0;i<vis.size();i++){
			vis[i]=true;
			temp=solve(i,i,adj,vis,0);
			vis[i]=false;
			if(temp){
				cout<<"YES";
				return 0;
			}
		}
	cout<<"NO";
	return 0;
}
