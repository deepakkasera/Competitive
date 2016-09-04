#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin>>n;
    string ss="1";
    int ans=0;
    while(n--){
        cin>>s;
        int count=0;
        for(int j=0;j<s.size();j++)
              count+=s[j]-'0';
          if(count == 0)    {cout<<0;  return 0;}
          else if(count == 1)     ans+=s.size()-1;
          else ss=s;
    }
    cout<<ss;
    for(int i=0;i<ans;i++)   cout<<0;
    return 0;
}