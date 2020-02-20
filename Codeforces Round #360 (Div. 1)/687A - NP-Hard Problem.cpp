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
    ll n,k;
    cin>>n>>k;
    set<ll>s1,s2;
    vector<vector<ll> >arr(100001);
    for(ll i=0;i<k;i++)
    {
        ll a,b;
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    ll flag=0;
    queue<ll>q;
    for(ll i=1;i<=n;i++)
    {
        if(arr[i].size()==0 || s1.find(i)!=s1.end() || s2.find(i)!=s2.end())
            continue;
        q.push(i);
        s1.insert(i);
        while(!q.empty())
        {
            ll a=q.front();
            q.pop();
            for(ll j=0;j<arr[a].size();j++)
            {
                if(s1.find(a)!=s1.end())
                {
                    ll b=arr[a][j];
                    if(s1.find(b)!=s1.end())
                    {
                        cout<<-1;
                        return 0;
                    }
                    if(s2.find(b)==s2.end())
                        q.push(b);
                    s2.insert(b);
                }
                else
                {
                    ll b=arr[a][j];
                    if(s2.find(b)!=s2.end())
                    {
                        cout<<-1;
                        return 0;
                    }
                    if(s1.find(b)==s1.end())
                        q.push(b);
                    s1.insert(b);
                }
            }
        }
    }
    if(s1.size())
    {
        cout<<s1.size()<<endl;
        set<ll>::iterator itr;
        for(itr=s1.begin();itr!=s1.end();itr++)
            cout<<*itr<<" ";
    }
    cout<<endl;
    if(s2.size())
    {
        cout<<s2.size()<<endl;
        set<ll>::iterator itr;
        for(itr=s2.begin();itr!=s2.end();itr++)
            cout<<*itr<<" ";
    }
}
