#include<bits/stdc++.h>
using namespace std;
int main(){
	int sze;
	cin>>sze;
	int sum=0;
	vector<int> temp(sze,-1);
	int tt;
	for(int i=0;i<sze;i++){
		cin>>tt;
		temp[i]=tt;
		sum+=tt;
	}
	sort(temp.begin(),temp.end());
	int sumt=0;
	int ans=0;
	for(int i=temp.size()-1;i>=0;i--){
		sumt+=temp[i];
		sum-=temp[i];
		ans+=1;
		if(sum<sumt) break;
	}
	cout<<ans;
	return 0;
}
