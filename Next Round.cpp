#include<bits/stdc++.h>
using namespace std;
int main(){
	int sze;
	int k;
	cin>>sze;
	cin>>k;
	int t;
	vector<int> temp(sze,-1);
	for(int i=0;i<sze;i++){
		cin>>t;
		temp[i]=t;
	}
	int count=0;
	for(int i=0;i<sze;i++){
		if(temp[i]>0 && temp[i]>=temp[k-1]) count+=1;
	}
	cout<<count;
	return 0;
}
