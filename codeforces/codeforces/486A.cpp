#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	cout<<( (n%2==0) ? n/2:-1-n/2 );
	return 0;
}
