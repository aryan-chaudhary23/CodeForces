#include<bits/stdc++.h>
using namespace std;

int solve(int b,vector<pair<int,int>> &t){
	vector<int> temp;
	t.clear();
	for(int i=1;i<=b;i++) temp.push_back(i);
	int c,d;
	while(temp.size()>1){
		c=temp[temp.size()-1];
		temp.pop_back();
		d=temp[temp.size()-1];
		temp.pop_back();
		t.push_back({c,d});
		if((c+d)%2) temp.push_back(((c+d)/2)+1);
		else temp.push_back((c+d)/2);
	}
	return temp[0];
}

int main(){
	int a,b;
	vector<pair<int,int>> t;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b;
		cout<<solve(b,t)<<endl;
		for(int i=0;i<t.size();i++) cout<<t[i].first<<" "<<t[i].second<<endl;
	}
	return 0;
}
