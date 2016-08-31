#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n>=2){
		cout<<"I hate "<<"that "<<"I love ";
		n-=2;
		if(n>0)   cout<<"that ";
		if(n==0)   cout<<"it ";
	}
	if(n==1)    {cout<<"I hate it"; return 0; }
	return 0;
}
