#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long int x,ans=0;
	map<int,int> m;
	for(int i=0;i<n;i++){
		cin>>x;
		for(int j=0;j<33;j++)   ans+=m[pow(2,j)-x];
		m[x]++;    
	}
		cout<<ans;
		return 0;
}
