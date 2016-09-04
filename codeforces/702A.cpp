#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int count=1;
	int count1=1;
	for(int i=0;i<n;i++)
	     cin>>a[i];
    for(int i=0;i<n-1;i++){
    	if(a[i+1]>a[i]){
    	     count++;
		}
    	else if(a[i]>=a[i+1])
    	    count1 = max (count1 , count),
			count=1;
	} 
	cout<<max(count,count1);
	return 0;
}
