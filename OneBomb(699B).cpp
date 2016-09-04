#include <bits/stdc++.h>
#define for(i,n)   for(int i=0;i<n;i++)
using namespace std;
int n,m;
char c[1005][1005];
int a[1005],b[1005];
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin>>n>>m;
	int sum=0;
	for(i,n){
		for(j,m){
			cin>>c[i][j];
			if(c[i][j]=='*')   sum++,a[i]++,b[j]++;
		}
	}
	int s=0;
	for(i,n){
		for(j,m){
           s=a[i]+b[j];
           if(c[i][j]=='*')   s-=1;
           	if(s==sum){
           		cout<<"YES"<<"\n"<<i+1<<" "<<j+1;
           		return 0;
           	}
		}
	}
     cout<<"NO";
	return 0;
}