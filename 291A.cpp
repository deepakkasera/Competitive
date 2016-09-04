#include<bits/stdC++.h>
using namespace std;
int main(){
     string s;
     cin>>s;
     for(int i=0;i<s.size();i++){
     	if(s[i]>='5')  s[i]='9'-s[i]+'0';
	 }
	 if(s[0]=='0') s[0]='9';
	 cout<<s;
	return 0;
}
