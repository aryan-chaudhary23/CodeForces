#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	string b;
	cin>>b;
	if(a==1){
		cout<<b;
		return 0;
	}
	string ans;
	int count=0;
	for(int i=0;i<b.size();i=i){
		ans.push_back(b[i]);
		i+=count+1;
		count+=1;
	}
	cout<<ans;
	return 0;
}
