#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	cin>>n>>a;
	long int m[n];
	for(int i=0;i<n;i++)   cin>>m[i];
    int ans=min(min(abs(m[n-1]-a+2*(a-m[1])),abs(2*(m[n-1]-a)+a-m[1])),min(abs(m[n-2]-a+2*(a-m[0])),abs(2*(m[n-2]-a)+a-m[0])));
    cout<<ans;
    return 0;
}
