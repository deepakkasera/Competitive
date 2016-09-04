#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0)
       return a;
	else return gcd(b,a%b);
}
int main(){
	int t;
	cin>>t;
	int n;
	while(t--){
       cin>>n;
       std::vector<int> v(n);
       int ans,r;
       for(int i=0;i<n;i++)    cin>>v[i];
            r=v[0];
       	for(int i=1;i<n;i++){
                  r=gcd(r,v[i]);
                  ans=r;
            }
       	cout<<ans<<"\n";    
	}
	return 0;
}
