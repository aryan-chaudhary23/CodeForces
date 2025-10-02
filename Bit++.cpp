#include<bits/stdc++.h>
using namespace std;

int main(){
	int sze;
	cin>>sze;
	char temp;
	int ans=0;
	for(int i=0;i<sze;i++){
		for(int j=0;j<3;j++){
			cin>>temp;
			if(temp=='-'){
				ans-=1;
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				break;
			}
			else if(temp=='+'){
				ans+=1;
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
