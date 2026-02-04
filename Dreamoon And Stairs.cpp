#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	int b;
	cin>>a;
	cin>>b;
	if(a==0){
		cout<<0;
		return 0;
	}
	if(b>a){
		cout<<-1;
		return 0;
	}
	int counts=0;
	if(a%2) counts+=(a/2)+1;
	else counts+=a/2;
	int temp=b-(counts%b);
	if(counts%b==0){
		cout<<counts<<endl;
		return 0;
	}
	if(a%2){
		if(counts-1>=temp) cout<<counts+temp<<endl;
		else cout<<-1;
	}
	else{
		if(counts>=temp) cout<<counts+temp<<endl;
		else cout<<-1;
	}
	return 0;
}
