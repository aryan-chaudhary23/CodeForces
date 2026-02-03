#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	bool flag=true;
	int count=0;
	int spaces=a;
	for(int i=0;i<(2*a)+1;i++){
		if(i>a) flag=false;
		if(flag){
			for(int j=0;j<spaces;j++) cout<<" "<<" ";
			for(int j=0;j<count;j++) cout<<j<<" ";
			for(int j=count;j>=0;j--){
				if(j==0) cout<<j;
				else cout<<j<<" ";
			}
			count+=1;
			spaces-=1;
			if(spaces==-1){
				spaces+=1;
				count-=1;
			}
			cout<<endl;
		}else{
			spaces+=1;
			count-=1;
			for(int j=0;j<spaces;j++) cout<<" "<<" ";
			for(int j=0;j<count;j++) cout<<j<<" ";
			for(int j=count;j>=0;j--){
				if(j==0) cout<<j;
				else cout<<j<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
