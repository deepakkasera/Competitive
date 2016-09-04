#include<bits/stdc++.h>
using namespace std;
int u[100005],v[100005],l[100005];
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int d[100005]={0};
	long long int  min=1000000001;
	for(int i=0;i<m;i++)      cin>>u[i]>>v[i]>>l[i];
	int z;
	for(int i=0;i<k;i++){
		cin>>z;
		d[z]=1;
	}
	for(int i=0;i<m;i++){
		if(d[u[i]]+d[v[i]]==1){
			if(min>l[i])    min=l[i];
		}
	}
	if(min==1000000001)    cout<<"-1";
	else cout<<min;
     return 0;
 }
