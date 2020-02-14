#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000007
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
    {
        string s;
        vector<ll>vis(26);
        cin>>s;
        ll n=s.size();
        string ans="";
        ans.pb(s[0]);
        ll j=0;
        ll flag=0;
        vis[s[0]-'a']++;
        for(ll i=1;i<n;i++)
        {
            if(vis[s[i]-'a']==0 && j+1==ans.size())
            {
                vis[s[i]-'a']++;
                ans.pb(s[i]);
                j++;
            }
            else if(vis[s[i]-'a']==0 && j==0)
            {
                vis[s[i]-'a']++;
                string ans2="";
                ans2.pb(s[i]);
                ans2=ans2+ans;
                ans=ans2;
            }
            else
            {
                if(j-1>=0 && s[i]==ans[j-1])
                {
                    j--;
                }
                else if(j+1<ans.size() && s[i]==ans[j+1])
                {
                    j++;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        string ans1="";
        ans1.pb(s[0]);
        j=0;
        ll flag1=0;
        vector<ll>vis1(26);
        vis1[s[0]-'a']++;
        for(ll i=1;i<n;i++)
        {
            if(vis1[s[i]-'a']==0 && j+1==ans1.size())
            {
                vis1[s[i]-'a']++;
                ans1.pb(s[i]);
                j++;
            }
            else if(vis1[s[i]-'a']==0 && j==0)
            {
                vis1[s[i]-'a']++;
                string ans2="";
                ans2.pb(s[i]);
                ans2=ans2+ans1;
                ans1=ans2;
            }
            else
            {
                if(j-1>=0 && s[i]==ans1[j-1])
                {
                    j--;
                }
                else if(j+1<ans1.size() && s[i]==ans1[j+1])
                {
                    j++;
                }
                else
                {
                    flag1=1;
                    break;
                }
            }
        }
        if(flag && flag1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        if(flag)
            ans=ans1;
        for(char i='a';i<='z';i++)
        {
            if(vis[i-'a'])
                continue;
            ans.pb(i);
        }
        cout<<ans<<endl;
    }
}
