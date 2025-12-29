#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	vector<int> temp(3,0);
	for(int i=0;i<3;i++){
		cin>>a;
		temp[i]=a;
	}
	sort(temp.begin(),temp.end());
	cout<<abs(temp[0]-temp[1])+abs(temp[1]-temp[2]);
	return 0;
}
