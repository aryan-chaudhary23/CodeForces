#include<bits/stdc++.h>
using namespace std;

int main(){
	string temp;
	cin>>temp;
	if(temp[0]>='a' && temp[0]<='z') temp[0]='A'+(temp[0]-'a');
	cout<<temp;
	return 0;
}
