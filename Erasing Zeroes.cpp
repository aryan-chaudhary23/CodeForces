#include<bits/stdc++.h>
using namespace std;

int solve(string temp){
	int count=0;
	int f=-1;
	int l=-1;
	for(int i=0;i<temp.size();i++){
		if(temp[i]=='1' && f==-1) f=i;
		else if(temp[i]=='1' && f!=-1) l=i;
	}
	if(f==-1 || l==-1) return 0;
	for(int i=f;i<=l;i++){
		if(temp[i]=='0') count+=1;
	}
	return count;
}

int main(){
	int a;
	cin>>a;
	string temp;
	for(int i=0;i<a;i++){
		cin>>temp;
		cout<<solve(temp)<<endl;
	}
	return 0;
}
