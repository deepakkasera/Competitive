#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int l1=s1.size();
	int l2=s2.size();
	int flag=0;
	if(l1<l2) {   cout<<"-1";   return 0; }   
	else if(l1>l2) {cout<<"1";   return 0;}
	else {
		for(int i=0;i<l1;i++){
			if(s1[i]!=s2[i] && s1[i]!=s2[i]+32 && s2[i]!=s1[i]+32)
			  flag++;
			
		}
	}
	if(flag==0)  cout<<"0";
	else cout<<"1";
	return 0;
}
