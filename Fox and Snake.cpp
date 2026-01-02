#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a;
	cin>>b;
	vector<vector<char> > temp(a,vector<char>(b,'.'));
	for(int i=0;i<a;i+=2){
		for(int j=0;j<b;j++) temp[i][j]='#';
	}
	bool t=true;
	for(int i=0;i<a;i++){
		if(i%2 && t){
			temp[i][b-1]='#';
			t=!t;
		}
		else if(i%2 && !t){
			temp[i][0]='#';
			t=!t;
		}
		
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++) cout<<temp[i][j];
		cout<<endl;
	}
	return 0;
}
