#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	int temp;
	vector<int> inp;
	for(int i=0;i<a;i++){
		cin>>temp;
		inp.push_back(temp);
	}
	int maxi=1;
	int count=1;
	for(int i=1;i<inp.size();i++){
		if(inp[i]>inp[i-1]){
			count+=1;
			maxi=max(maxi,count);
		}else count=1;
	}
	cout<<maxi;
	return 0;
}
