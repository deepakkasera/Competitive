#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> result;
	int a[n+1][n+1];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
    bool flag;
	for(int i=1;i<=n;i++){
		flag=false;
		for(int j=1;j<=n;j++){
			if(a[i][j]==1 || a[i][j]==3)  flag=true; 
		} 
		if(!flag) result.push_back(i);
	}
	cout<<result.size()<<"\n";
	for(int i=0;i<result.size();i++) cout<<result.at(i)<<" ";
}

