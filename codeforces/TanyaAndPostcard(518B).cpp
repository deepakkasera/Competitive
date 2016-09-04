#include <bits/stdc++.h>
using namespace std;
string s,t,s1;
int c[200];
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin>>s>>t;
	int y=0,w=0;
	for(int i=0;i<t.size();i++)     c[t[i]]++;
	for(int i=0;i<s.size();i++){
		 if(c[s[i]])     y++,c[s[i]]--;
	     else s1+=s[i];
	}
	for(int i=0;i<s1.size();i++){
		if(c[s1[i]+32])    w++,c[s1[i]+32]--;
		else if(c[s1[i]-32])   w++,c[s1[i]-32]--;
	}
	cout<<y<<" "<<w;
	return 0;
}