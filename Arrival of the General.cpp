#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	int temp;
	cin>>a;
	int mini_value=1e9;
	int mini_index;
	int maxi_value=-1e9;
	int maxi_index;
	for(int i=0;i<a;i++){
		cin>>temp;
		if(maxi_value<temp){
			maxi_value=temp;
			maxi_index=i;
		}
		if(mini_value>=temp){
			mini_value=temp;
			mini_index=i;
		}
	} //cout<<"-> "<<maxi_index<<" "<<mini_index<<endl;
	if(maxi_index==mini_index) cout<<0;
	else if(maxi_index>mini_index) cout<<maxi_index+(a-mini_index-2);
	else cout<<maxi_index+(a-mini_index-1);
	return 0;
}
