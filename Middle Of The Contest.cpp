#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	if(a==c){
		cout<<a<<":"<<b+((d-b)/2);
		return 0;
	}
	long long int total_min=0;
	total_min=(60-b)+(d)+(c-a-1)*60;
	total_min=total_min/2;
	int temp;
	if(total_min>=(60-b)){
		total_min-=60-b;
		a+=1;
		temp=total_min/60;
		total_min-=temp*60;
		a+=temp;
		b=total_min;
		cout<<a<<":"<<b;
	}else cout<<a<<":"<<b+total_min;
	return 0;
}
