#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	vector<int> ans;
	int b,c,d;
	int count=0;
	for(int i=0;i<a;i++){
		cin>>b;
		cin>>c;
		cin>>d;
		count=0;
		while(b<=d && c<=d){
			if(b>c) c+=b;
			else b+=c;
			count+=1;
		}
		ans.push_back(count);
	}
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
	return 0;
}
