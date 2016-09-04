#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int k=8;
	if(s[0]=='a' || s[0]=='h')
	     k=k-3;
    if(s[1]=='1' || s[1]=='8')
        k=k-3;
     cout<<max(k,3);
     return 0;
}
