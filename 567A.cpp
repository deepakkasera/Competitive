#include<bits/stdc++.h>
#define l1 long long int
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<l1> v(n);
	for(int i=0;i<n;i++)
	   cin>>v[i];
	vector<int> minimum(n);
	vector<int> maximum(n);
	for(int i=0;i<n;i++){
		maximum[i]=max(abs(v[n-1]-v[i]),abs(v[0]-v[i]));
		minimum[i]=min(abs(v[i+1]-v[i]),abs(v[i-1]-v[i]));
	}
	for(int i=0;i<n;i++)
	    cout<<minimum[i]<<" "<<maximum[i]<<"\n";
	return 0;
}
