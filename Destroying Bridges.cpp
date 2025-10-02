#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b;
	vector<pair<int,int> > temp;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>b;
		temp.push_back({a,b});
	}
	for(int i=0;i<n;i++){
		if(temp[i].second>=(temp[i].first-1)) cout<<1<<endl;
		else cout<<temp[i].first<<endl;
	}
	return 0;
}
