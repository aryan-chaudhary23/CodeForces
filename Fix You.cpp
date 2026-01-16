#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<char>> &inp){
	int ans=0;
	for(int i=0;i<inp[0].size();i++){
		if(inp[inp.size()-1][i]=='D') ans+=1;
	}
	for(int i=0;i<inp.size();i++){
		if(inp[i][inp[0].size()-1]=='R') ans+=1;
	}
	return ans;
}

int main(){
	int a,b,c;
	cin>>a;
	char d;
	for(int i=0;i<a;i++){
		cin>>b;
		cin>>c;
		vector<vector<char>> inp(b,vector<char>(c,' '));
		for(int j=0;j<inp.size();j++){
			for(int k=0;k<inp[0].size();k++){
				cin>>d;
				inp[j][k]=d;
			}
		}
		cout<<solve(inp)<<endl;
	}
	return 0;
}
