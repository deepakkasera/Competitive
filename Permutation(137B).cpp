#include <bits/stdc++.h>
using namespace std;
int n,a[5005];
set<int> s;
std::vector<int> v;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	int cnt;
	for(int i=0;i<n;i++)   cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i]>n)   v.push_back(a[i]);
		else s.insert(a[i]);
	}
	cnt=n-v.size();
	int ans=cnt-s.size()+v.size();
	cout<<ans;
	return 0;
}