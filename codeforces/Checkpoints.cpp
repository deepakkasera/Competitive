#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,d[100005],ans,ans1;
	cin>>n>>a;
	for(int i=0;i<n;i++)   cin>>d[i];
	if(n==1) { cout<<"0"; return 0;}
	else if(n==2)   {
	ans=min(abs(a-d[0]),abs(a-d[1]));
	cout<<ans;
	return 0;
	}
	else 
	   sort(d,d+n);
	   ans=min(abs(a-d[0]),abs(a-d[n-2]));
	   ans+=abs(d[0]-d[n-2]);
	   ans1=min(abs(d[1]-a),abs(a-d[n-1]));
	   ans1+=abs(d[1]-d[n-1]);
	   ans=min(ans,ans1);
	cout<<ans;
	return 0;
}
