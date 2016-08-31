#include<bits/stdc++.h>
using namespace std;
int n,a[51],b[51],c[51],d[51];
int main(){
	cin>>n;
	for(int i=0;i<n-1;i++)    cin>>a[i];
	for(int i=0;i<n-1;i++)    cin>>b[i];
	for(int i=0;i<n;i++)      cin>>c[i];
	for(int i=0;i<n;i++){
		for(int k=0;k<i;k++)    d[i]+=a[k];
		for(int k=i;k<n-1;k++)  d[i]+=b[k];
		d[i]+=c[i];
	}
	sort(d,d+n);
	cout<<d[0]+d[1];
	return 0;
}
