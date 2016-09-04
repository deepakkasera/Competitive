#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m1=0;
	int c1=0;
	while(n--){
		int m,c;
		cin>>m>>c;
		if(m>c)
		   m1++;
		else if(m<c)
		   c1++;
		else if(m==c){
			m1++;
			c1++;
		}
	}
	if(m1>c1){
		cout<<"Mishka";
		return 0;
	}
	if(m1<c1){
		cout<<"Chris";
		return 0;
	}
	else 
	   cout<<"Friendship is magic!^^";
	   return 0;
}
