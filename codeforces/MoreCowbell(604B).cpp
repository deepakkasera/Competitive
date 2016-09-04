#include <bits/stdc++.h>
#define for(i,n)  for(int i=0;i<n;i++)
using namespace std;
int n,k;
int s[100005];
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin>>n>>k;
    for(i,n)  cin>>s[i];
	int res=s[n-1];
    for(i,n-k){
    	res=max(res,s[i]+s[2*(n-k)-1-i]);
    }
     cout<<res;
     return 0;
}
