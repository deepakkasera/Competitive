#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b;
	cin>>a>>b;
	long long int ans=0;
	while(a>0 && b>0){
		if(a>=b){
			ans+=a/b;
			a=a%b;
		}		
		else {
			ans+=b/a;
			b=b%a;
		}
	}
	cout<<ans;
	return 0;
}
