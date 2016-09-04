#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false)
using namespace std;
int main(){
    boost;
    int n;
    cin>>n;
    int x[n],y[n],a[100005];
    for(int i=1;i<=n;i++)
         {
            cin>>x[i]>>y[i];
            a[x[i]]++;  
         }
     for(int i=1;i<=n;i++){
        cout<<n-1+a[y[i]]<<" "<<n-1+a[y[i]]<<"\n";
     }
     return 0;
}
