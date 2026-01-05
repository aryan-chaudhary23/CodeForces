#include<bits/stdc++.h>
using namespace std;

int main(){
	string temp;
	cin>>temp;
	vector<int> tempi(3,0);
	for(int i=0;i<temp.size();i+=2){
		tempi[temp[i]-'1']+=1;
	}
	for(int i=0;i<temp.size();i+=2){
		if(tempi[0]){
			temp[i]='1';
			tempi[0]-=1;
		}else if(tempi[1]){
			temp[i]='2';
			tempi[1]-=1;
		}else if(tempi[2]){
			temp[i]='3';
			tempi[2]-=1;
		}
	}
	cout<<temp;
	return 0;
}
