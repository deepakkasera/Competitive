#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cash=0,d[24][60]={0,0};
	int h,m;
	for(int i=0;i<n;i++){
		cin>>h>>m;
		d[h][m]++;
		if(cash<d[h][m])   cash=d[h][m];
	}
	cout<<cash;
	return 0;
}
