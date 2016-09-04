#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	int rem=n%x;
	cout<<n+(x-rem);
	return 0;	
	}
