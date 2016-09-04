#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin>>n;
    string str;
    bool flag=false;
    while(n--)  cin>>s,str+=s+"\n";
    int pos=str.find("OO");
    if(pos>=0){
        str.replace(pos,2,"++");
        cout<<"YES"<<"\n";
        cout<<str;
    }
    else cout<<"NO";
    return 0;
}
