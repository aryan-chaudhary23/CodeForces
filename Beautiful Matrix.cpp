#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int> > inp(5,vector<int>(5,0));
	int temp;
	int a,b;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>temp;
			if(temp){
				a=i;
				b=j;
			}
			inp[i][j]=temp;
		}
	}
	cout<<abs(2-a)+abs(2-b);
	return 0;
	
}
