#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int len=str.length();
	if(str[0]=='4')    { cout<<"NO" ;   return 0;	}
	for(int i=0;i<len;i++){
		if(str[i]!='1' && str[i]!='4')  {
			 cout<<"NO";   return 0;
		}
	}
	for(int i=0;i<len;i++){
		if(str[i]=='4' && str[i+1]=='4' && str[i+2]=='4'){
			cout<<"NO";  return 0;
		}
	}
	cout<<"YES";
	return 0;
}
