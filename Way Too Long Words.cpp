#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	vector<string> temp;
	string t;
	for(int i=0;i<size;i++){
		cin>>t;
		temp.push_back(t);
		t.clear();
	}
	for(int i=0;i<temp.size();i++){
		if(temp[i].size()>10){
			t+=temp[i][0];
			ostringstream oss;
            oss << (temp[i].size() - 2);
            t += oss.str();
			t+=temp[i][temp[i].size()-1];
			cout<<t<<endl;
			t.clear();
		}
		else cout<<temp[i]<<endl;
	}
	return 0;
}
