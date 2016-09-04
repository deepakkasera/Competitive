#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l,v1,v2,k;
	cin>>n>>l>>v1>>v2>>k;
	float t;
	if(n==k){
		t=l/v2;
		cout<<setprecision(20);
		cout<<t;
	}
	return 0;
}
