#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long int value,val1,val2;
	cin>>value;
	val1=val2=value;
	while(val1!=0){
		int digit=val1%10;
		val1=val1/10;
		if(digit!=4 && digit!=7)   {cout<<"NO"; return 0;}
	}
    int sum1=0,sum2=0;
	for(int i=0;i<n/2;i++){
		sum1+=(val2%10);
		val2/=10;
	}
	while(val2!=0){
		sum2+=val2%10;
		val2/=10;
	}
	if(sum1 == sum2)   cout<<"YES";
	else cout<<"NO";
	return 0;
}
