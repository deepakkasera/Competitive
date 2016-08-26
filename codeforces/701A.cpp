#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	   cin>>v[i];
	int sum=0;
	for(int i=0;i<n;i++)
	   sum+=v[i];
	sum=sum*2/n;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int a=v[i]+v[j];
			if(a==sum){
				cout<<i+1<<" "<<j+1<<"\n";
				v[i]=0;
				v[j]=0;
				break;
			}
		}
	}
	return 0;
}
