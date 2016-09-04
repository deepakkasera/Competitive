#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	if(n==1 || n==2)
	    cout<<"-1";
	else if (n%2==1){
		cout<<(n*n-1)/2<<" "<<(n*n+1)/2;
	}
	else cout<<(n*n/4 - 1)<<" "<<(n*n/4 + 1);
	return 0; 
}
