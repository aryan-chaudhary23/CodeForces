#include<bits/stdc++.h>
using namespace std;

void solve(int temp,int &a, int &b){
	a=0;
	b=0;
	vector<int> d;
	int count=0;
	while(temp){
		if(temp%10){
			d.push_back((temp%10)*pow(10,count));
			a+=1;
		}
		count+=1;
		temp=temp/10;
	}
	cout<<a<<endl;
	for(int i=0;i<d.size();i++) cout<<d[i]<<" ";
	cout<<endl;
}

int main(){
	int a;
	cin>>a;
	vector<int> temp(a,0);
	for(int i=0;i<temp.size();i++){
		cin>>a;
		temp[i]=a;
	}
	int b;
	for(int i=0;i<temp.size();i++) solve(temp[i],a,b);
	return 0;
}
