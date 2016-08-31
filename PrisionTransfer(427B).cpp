#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c,count=0,k;
	long long int t,a;
	cin>>n>>t>>c;
	while(n--){
		cin>>a;
		if(a<=t)  k++;
		else if(a>t)    k=0;
		if(k>=c)   count++;
	}
	cout<<count;
	return 0;
}
