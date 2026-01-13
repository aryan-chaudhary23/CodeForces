#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin>>a;
	string ans;
	for(int i=0;i<a.size();i++){
		if(a[i]>='A' && a[i]<='Z') a[i]='a'+a[i]-'A';
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y') continue;
		else{
			ans.push_back('.');
			ans.push_back(a[i]);
		}
	}
	cout<<ans;
	return 0;
}
