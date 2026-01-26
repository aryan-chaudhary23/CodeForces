#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	vector<vector<int>> inp(a,vector<int>(b,0));
	int temp;
	vector<bool> row(b,true);
	vector<bool> col(a,true);
	for(int i=0;i<inp.size();i++){
		for(int j=0;j<inp[0].size();j++){
			cin>>temp;
			if(!temp){
				col[i]=false;
				row[j]=false;
			}
			inp[i][j]=temp;
		}
	}
	bool flag=true;
	bool flg=false;
	for(int i=0;i<inp.size();i++){
		for(int j=0;j<inp[0].size();j++){
			if(inp[i][j] && !col[i] && !row[j]){
				cout<<"NO";
				return 0;
			}
			if(inp[i][j]) flg=true;
			if(col[i] && row[j]){
				flag=false;
				inp[i][j]=1;
			}
			else inp[i][j]=0;
		}
	}
	if(flag && flg) cout<<"NO";
	else {
		cout<<"YES"<<endl;
		for(int i=0;i<inp.size();i++){
			for(int j=0;j<inp[0].size();j++) cout<<inp[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}
