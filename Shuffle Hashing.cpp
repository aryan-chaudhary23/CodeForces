#include<bits/stdc++.h>
using namespace std;

bool finale(vector<int> &hashb,vector<int> &hashc){
	for(int i=0;i<26;i++){
		if(hashb[i]!=hashc[i]) return false;
	}
	return true;
}

bool solve(string &b,string &c){
	if(b.size()>c.size()) return false;
	else{
		int i=0;
		int j=b.size()-1;
		vector<int> hashb(26,0);
		vector<int> hashc(26,0);
		for(int i=0;i<b.size();i++){
			hashb[b[i]-'a']+=1;
			hashc[c[i]-'a']+=1;
		}
		while(j<c.size()){
			if(finale(hashb,hashc)) return true;
			else{
				hashc[c[i]-'a']-=1;
				i+=1;
				if(j+1<c.size()) hashc[c[j+1]-'a']+=1;
				j+=1;
			}
		}
		return false;
	}
}

int main(){
	int a;
	cin>>a;
	string b,c;
	for(int i=0;i<a;i++){
		cin>>b;
		cin>>c;
		if(solve(b,c)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
