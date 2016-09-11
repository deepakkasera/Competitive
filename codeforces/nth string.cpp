#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false)
using namespace std;
int main(int argc, char const *argv[])
{
    boost;
    string str;
    cin>>str;
    long long ans;
    for(int i=0;i<str.length();i++)
        ans+=(str[i]=='a');
    long long int n;
    cin>>n;
    ans*=(n/str.length());
    n=n%str.length();
    for(int i=0;i<n;i++)
        ans+=(str[i]=='a');
    cout<<ans;
    return 0;
}
