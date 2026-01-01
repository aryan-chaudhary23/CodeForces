#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	int b;
	for(int i=0;i<a;i++){
		cin>>b;
		if(b){
			cout<<"HARD";
			return 0;
		}
	}
	cout<<"EASY";
	return 0;
}
