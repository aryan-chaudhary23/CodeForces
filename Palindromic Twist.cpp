#include<bits/stdc++.h>
using namespace std;

bool possible(string &inp){
	int i=0;
	int j=inp.size()-1;
	while(i<j){
		if((abs((inp[i]-'a')-(inp[j]-'a'))==0)){
			i+=1;
			j-=1;
			continue;
		}
		if((inp[i]=='a' && inp[j]!='c') || (inp[j]=='z' && inp[i]!='x') || (inp[i]=='z' && inp[j]!='x') || (inp[j]=='a' && inp[i]!='c')) return false;
		else if((abs((inp[i]-'a')-(inp[j]-'a'))!=2)) return false;
		else{
			i+=1;
			j-=1;
		}
	}
	return true;
}

int main(){
	int a;
	cin>>a;
	int b;
	string inp;
	for(int i=0;i<a;i++){
		cin>>b;
		cin>>inp;
		if(possible(inp)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
