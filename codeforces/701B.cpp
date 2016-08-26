#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n][n]={0};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=0;
		}
	}
	int result[m];
	for(int i=0;i<m;i++)
	   result[i]=0;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[x][y]=1;
	    for(int j=1;j<=n;j++){
		for(int k=1;k<=n;k++){
			if(j!=x && k!=y){
				if(a[j][k]!=1){
				a[j][k]=1;
				result[i]++;
				}
			}
		}
	}
	}
	for(int i=0;i<m;i++)
	   cout<<result[i]<<"\n";
	return 0;
}
