#include<bits/stdc++.h>
using namespace std;

int row[]={1,0,-1,0};
int col[]={0,1,0,-1};
int ni,nj;

bool check(int i, int j, vector<string> &graph){
	for(int k=0;k<4;k++){
		ni=i+row[k];
		nj=j+col[k];
		if(ni>=0 && nj>=0 && ni<graph.size() && nj<graph[0].size() && graph[ni][nj]=='S'){
			//cout<<i<<" "<<j<<endl;
			//cout<<ni<<" "<<nj<<endl;
			return true;
	    }
	}
	return false;
}

void go(int i,int j, vector<string> &graph){
	for(int k=0;k<4;k++){
		ni=i+row[k];
		nj=j+col[k];
		if(ni>=0 && nj>=0 && ni<graph.size() && nj<graph[0].size() && graph[ni][nj]=='.') graph[ni][nj]='D';
	}
}

int main(){
	int row;
	int col;
	cin>>row;
	cin>>col;
	vector<string> graph;
	string temp;
	for(int i=0;i<row;i++){
		cin>>temp;
		graph.push_back(temp);
		temp.clear();
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<graph[i].size();j++){
			if(graph[i][j]=='W' && check(i,j,graph)){
				//cout<<i<<" "<<j<<endl;
				cout<<"NO";
				return 0;
			}
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(graph[i][j]=='S') go(i,j,graph);
		}
	}
	cout<<"YES"<<endl;
	for(int i=0;i<row;i++) cout<<graph[i]<<endl;
	return 0;
}
