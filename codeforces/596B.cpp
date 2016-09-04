#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,a=0,b,sum=0;
	cin>>n;
	while(n--){
		cin>>b;
		sum+=abs(b-a);
		a=b;
	}
	cout<<sum;
	return 0;
}
