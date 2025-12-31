#include<bits/stdc++.h>
using namespace std;
int main(){
	string temp;
	cin>>temp;
	if(temp.size()==1){
		if(temp[0]>='a' && temp[0]<='z') temp[0]='A'+(temp[0]-'a');
		else temp[0]='a'+(temp[0]-'A');
		cout<<temp[0];
		return 0;
	}
	bool flag=true;
	if(temp[0]>='A' && temp[0]<='Z' && temp[1]>='a' && temp[1]<='z'){
		cout<<temp;
		return 0;
	}
	if(temp[0]>='A' && temp[0]<='Z') flag=true;
	else flag=false;
	int count=0;
	for(int i=0;i<temp.size();i++){
		if(temp[i]>='A' && temp[i]<='Z') count+=1;
	}
	if(count==temp.size()){
		for(int i=0;i<temp.size();i++) temp[i]='a'+(temp[i]-'A');
		cout<<temp;
	}
	else if(count== temp.size()-1 && !flag){
		temp[0]='A'+(temp[0]-'a');
		for(int i=1;i<temp.size();i++) temp[i]='a'+(temp[i]-'A');
		cout<<temp;
	}else cout<<temp;
	return 0;
}
