#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	long long int a[n];
	long long int s=1e9;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i>0){
			if(str[i-1]=='R' && str[i]=='L')
			    s=min((a[i]-a[i-1])/2,s);
		}
	}
	cout<<( (s==1e9) ? -1:s );
	return 0;
}
