#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;
	cin>>a;
	cin>>b;
	vector<vector<char> > temp(a,vector<char>(a,'G'));
	vector<vector<bool> > vis(a,vector<bool>(a,false));
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(b){
				if(i==0){
					vis[i][j]=true;
					temp[i][j]='U';
					b-=1;
				}
				else if(i==a-1){
					vis[i][j]=true;
					temp[i][j]='D';
					b-=1;
				}
				else if(j==0){
					vis[i][j]=true;
					temp[i][j]='L';
					b-=1;
				}
				else if(j==a-1){
					vis[i][j]=true;
					temp[i][j]='R';
					b-=1;
				}
				else{
					if(vis[i-1][j]){
						vis[i][j]=true;
						temp[i][j]='U';
						b-=1;
					}else if(vis[i][j-1]){
						vis[i][j]=true;
						temp[i][j]='L';
						b-=1;
					}
					else if(vis[i+1][j]){
						vis[i][j]=true;
						temp[i][j]='D';
						b-=1;
					}
					else if(vis[i][j+1]){
						vis[i][j]=true;
						temp[i][j]='R';
						b-=1;
					}
				}
			}else{
				if(i+1<a && !vis[i+1][j]) temp[i][j]='D';
				else if(i-1>=0 && !vis[i-1][j]) temp[i][j]='U';
				else if(j-1>=0 && !vis[i][j-1]) temp[i][j]='L';
				else if(j+1<a && !vis[i][j+1]) temp[i][j]='R';
				else{
					cout<<"NO"<<endl;
					return;
				}
			}
		}
	}
	cout<<"YES"<<endl;
		for(int i=0;i<a;i++){
			for(int j=0;j<a;j++) cout<<temp[i][j];
			cout<<endl;
		}
	return;
}

int main(){
	int c;
	cin>>c;
	for(int i=0;i<c;i++) solve();
	return 0;
}
