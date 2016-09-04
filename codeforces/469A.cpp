#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p,q;
	cin>>n;
	cin>>p;
	vector< int > v1(p);
	for(int i=0;i<p;i++)
	   cin>>v1[i];
	cin>>q;
	vector< int > v2(q);
	for(int i=0;i<q;i++)
	   cin>>v2[i];
	bool a[n];
	for(int i=1;i<=n;i++)   a[i]=false;
	for(int i=0;i<p;i++)
	   a[v1[i]]=true;
	for(int i=0;i<q;i++)
	     a[v2[i]]=true;
    for(int i=1;i<=n;i++){
    	if(!a[i]){
    		cout<<"Oh, my keyboard!";
    		return 0;	
		}
	}   
	cout<<"I become the guy.";
	return 0;
}
