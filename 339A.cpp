#include<bits/stdc++.h>
#define PB(x) push_back(x);
#define all(c) c.begin(),c.end()
using namespace std;
int main(){
	string str;
	cin>>str;
	int len=str.size();
	vector<int> v;
	for(int i=0;i<len;i++){
		if(str[i]!='+')
		   v.PB(str[i]-'0');
	}
	sort(all(v));
	cout<<v[0];
	for(int i=1;i<v.size();i++)
	   cout<<"+"<<v[i];
	return 0;
	
}
