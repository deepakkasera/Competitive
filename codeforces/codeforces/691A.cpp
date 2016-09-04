#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1){
		int t;
		cin>>t;
		if(t==1)	cout<<"YES"<<"\n";
		else cout<<"NO";
		return 0;
	}
	int n0=0;
	while(n--){
		int t;
		cin>>t;
		if(t==0)  n0++;	
	}
	if(n0>1 || n0==0){
		cout<<"NO";
	}
	else cout<<"YES";
	return 0;
}
