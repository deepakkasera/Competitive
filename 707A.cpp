#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	char a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y'){
				cout<<"#Color";
				return 0;
			}
			else if (a[i][j]=='W' || a[i][j]=='B' || a[i][j]=='G'){
				flag++;
			}
		}
	}
	if(flag==n*m)
	   cout<<"#Black&White";
	return 0;
}
