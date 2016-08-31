#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i=0;
	int len=s.length();
	while(s[i]=='a' && i<len){
		i++;
	}
	if(i==len)   s[len-1]='z';
	while(s[i]!='a' && i<len){
		s[i]=s[i]-1;
		i++;
	}
	cout<<s;
	return 0;
	
}
