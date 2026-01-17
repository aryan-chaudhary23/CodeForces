#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &week,int a){
	int sum=0;
	int last;
	for(int i=0;i<week.size();i++){
		if(!week[i]) continue;
		if(a<=week[i]) return i+1;
		else{
			last=i;
			a-=week[i];
		}
		sum+=week[i];
	}
	a=a%sum;
	if(!a) return last+1;
	for(int i=0;i<week.size();i++){
		if(!week[i]) continue;
		if(a<=week[i]) return i+1;
		else a-=week[i];
	}
	return 0;
}

int main(){
	int a;
	cin>>a;
	vector<int> week(7,0);
	int temp;
	for(int i=0;i<week.size();i++){
		cin>>temp;
		week[i]=temp;
	}
	cout<<solve(week,a);
	return 0;
}
