#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	int b;
	bool inc=true;
	for(int i=0;i<a;i++){
		cin>>b;
		if(b%2==0) cout<<b/2<<endl;
		else{
			if(inc){
				if(b>0) cout<<(b/2)+1<<endl;
				else cout<<b/2<<endl;
				inc=!inc;
			}else{
				if(b>0) cout<<b/2<<endl;
				else cout<<(b/2)-1<<endl;
				inc=!inc;
			}
		}
	}
	return 0;
}
