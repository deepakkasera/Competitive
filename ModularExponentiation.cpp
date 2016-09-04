#include <bits/stdc++.h>
#define ull unsigned long long 
using namespace std;
ull fastPower(ull a,ull b,ull mod){
	ull x=a,y=b,ans=1;
    while(b!=0){
    	if(b&1){
    		ans*=a;
    		ans%=mod;
    	}
    	a=(a*a)%mod;
    	b/=2;
    }
    return ans;
}
int main(){
     ull n,k,m;
     cin>>n>>k>>m;

}