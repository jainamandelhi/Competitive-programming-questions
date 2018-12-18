#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    map<string,ll>m;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
        if(m[s]>1)
            cout<<s<<m[s]-1<<endl;
        else
            cout<<"OK"<<endl;
    }
    return 0;
}
