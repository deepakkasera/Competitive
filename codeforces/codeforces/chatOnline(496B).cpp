#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    set<int> s;
    ios_base::sync_with_stdio(false);
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    int a[p],b[p],c[q],d[q];
    for(int i=0;i<p;i++)    cin>>a[i]>>b[i];
    for(int i=0;i<q;i++)    cin>>c[i]>>d[i];
    for(int i=l;i<=r;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<q;k++){
                if(a[j]>d[k]+i || b[j]<c[k]+i)   ;
                else s.insert(i);
            }
        }
    }
    cout<<s.size();
    return 0;
}