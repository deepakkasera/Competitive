#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	set<int> m;
	set<int>::iterator it;
	string s;
	cin>>s;
	if(n>26)   { cout<<"-1"; return 0; }
	for(int i=0;i<n;i++)
	{
		m.insert(s[i]);
	 } 
	 cout<<n-m.size();
	 return 0;
}
