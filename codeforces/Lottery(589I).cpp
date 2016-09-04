#include <bits/stdc++.h>
#define all(c)  c.begin(),c.end()
using namespace std;
int n,k;
int occurence[110]={0};
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
  cin>>n>>k;
  int v;
  for(int i=0;i<n;i++){
    cin>>v;
    occurence[v]++;
  }
  int ans=0;
  for(int i=1;i<=k;i++)
    ans+=abs(n/k-occurence[i]);
  cout<<ans/2;
	return 0;
}
