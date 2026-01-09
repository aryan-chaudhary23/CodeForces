#include<bits/stdc++.h>
using namespace std;

int solve(int a){
	int b=a;
	int count=0;
	while(b){
		b=b/10;
		count+=1;
	}
	return (10*((a%10)-1))+((count)*(count+1)/2);
}

int main(){
	int a;
	cin>>a;
	int temp;
	for(int i=0;i<a;i++){
		cin>>temp;
		cout<<solve(temp)<<endl;
	}
	return 0;
}
