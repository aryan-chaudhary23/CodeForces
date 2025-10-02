#include<bits/stdc++.h>
using namespace std;

int main(){
	int sze;
	cin>>sze;
	int temp;
	vector<vector<bool> > ans(sze,vector<bool>(3,false));
	for(int i=0;i<sze;i++){
		for(int j=0;j<3;j++){
			cin>>temp;
			ans[i][j]=temp;
		}
	}
	int count=0;
	int cou=0;
	for(int i=0;i<sze;i++){
		cou=0;
		for(int j=0;j<3;j++){
			if(ans[i][j]) cou+=1;
		}
		if(cou>=2) count+=1;
	}
	cout<<count;
	return 0;
}
