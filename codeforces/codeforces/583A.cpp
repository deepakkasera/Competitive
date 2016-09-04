#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int t=n*n;
	int a[51],b[51];
	int h,v;
    for(int i=1;i<=t;i++){
		cin>>h>>v;
		if(a[h]!=1 && b[v]!=1){
			cout<<i<<" ";
			a[h]=1;
			b[v]=1;
		}
	}
	return 0;
}
