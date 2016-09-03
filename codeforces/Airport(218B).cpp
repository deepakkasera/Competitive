#include <bits/stdc++.h>
#define all(c)  c.begin(),c.end() 
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int a[m],b[m];
    for(int i=0;i<m;i++)    cin>>a[i],b[i]=a[i];
    int max=0,min=0;
     for(int i=0;i<n;i++){
        sort(a,a+m);
        max+=a[m-1];
        a[m-1]--;
     }
     int p=0;
     sort(b,b+m);
     for(int i=0;i<n;i++){
        if(b[p]<=0)   p++;
        min+=b[p];
        b[p]--;
     }
     cout<<max<<" "<<min;
    return 0;
}