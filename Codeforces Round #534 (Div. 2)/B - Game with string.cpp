#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll n=s.size();
    ll ans=0;
    ll i=0;
    while(1)
    {
        if(i==s.size())
            break;
        if(i<s.size()-1 && s[i]==s[i+1])
        {
            s.erase(i,2);
            if(i>0)
                i--;
            ans++;
            continue;
        }
        i++;
    }
    if(ans%2==0)
        cout<<"No";
    else
        cout<<"Yes";
	return 0;
}
