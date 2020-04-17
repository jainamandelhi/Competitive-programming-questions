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
    ll n,m,k;
    cin>>n>>m>>k;
    ll a,b;
    ll cnt = 0;
    vector<vector<char> >v(n,vector<char>(m));
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            cin>>v[i][j];
            if(v[i][j] == '.')
            {
                a = i;
                b = j;
                cnt++;
            }
        }
    }
    cnt -= k;
    //cout<<cnt<<endl;
    set<pair<ll,ll> >s;
    queue<pair<ll,ll> >q;
    q.push(mp(a,b));
    while(!q.empty())
    {
        s.insert(q.front());
        ll fi = q.front().first;
        ll se = q.front().second;
        q.pop();
        if(s.size() == cnt)
            break;
        if(fi-1 >= 0 && v[fi-1][se] == '.' && s.find(mp(fi-1,se)) == s.end())
        {
            q.push(mp(fi-1,se));
            s.insert(mp(fi-1,se));
            if(s.size() == cnt)
                break;
        }
        if(fi+1 < n && v[fi+1][se] == '.' && s.find(mp(fi+1,se)) == s.end())
        {
            q.push(mp(fi+1,se));
            s.insert(mp(fi+1,se));
            if(s.size() == cnt)
                break;
        }
        if(se-1 >= 0 && v[fi][se-1] == '.' && s.find(mp(fi,se-1)) == s.end())
        {
            q.push(mp(fi,se-1));
            s.insert(mp(fi,se-1));
            if(s.size() == cnt)
                break;
        }
        if(se + 1 < m && v[fi][se+1] == '.' && s.find(mp(fi,se+1)) == s.end())
        {
            q.push(mp(fi,se+1));
            s.insert(mp(fi,se+1));
            if(s.size() == cnt)
                break;
        }
    }
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            if(v[i][j] == '.' && s.find(mp(i,j)) == s.end())
                v[i][j]='X';
            cout<<v[i][j];
        }
        cout<<endl;
    }
}
