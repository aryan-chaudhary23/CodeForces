#include<bits/stdc++.h>
using namespace std;
int main(){
	int count=0;
	string temp;
	int tryi;
	cin>>tryi;
	for(int i=0;i<tryi;i++){
		cin>>temp;
		if(temp[0]=='T') count+=4;
		else if(temp[0]=='C') count+=6;
		else if(temp[0]=='O') count+=8;
		else if(temp[0]=='D') count+=12;
		else count+=20;
	}
	cout<<count;
	return 0;
}
