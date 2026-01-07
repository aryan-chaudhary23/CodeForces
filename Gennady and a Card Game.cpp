#include<bits/stdc++.h>
using namespace std;

int main(){
	string temp;
	cin>>temp;
	string t;
	for(int i=0;i<5;i++){
		cin>>t;
		if(temp[0]==t[0] || temp[1]==t[1]){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
