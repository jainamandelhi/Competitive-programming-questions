#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
int main()
{
    ll n,ans=0;
    cin>>n;
    string s;
    cin>>s;
        for(ll i=0;i<s.size();)
        {
            if(i%2==0 && i+1<s.size() && s[i]==s[i+1])
            {
                s.erase(i+1,1);
                ans++;
            }
            else
                i++;
        }
        if(s.size()%2!=0)
        {
            ans++;
            s.erase(s.size()-1,1);
        }
        cout<<ans<<endl;
        cout<<s;
}
