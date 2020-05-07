/* Isn't passion overrated?*/

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
    ll n,m;
    cin>>n>>m;
    ll cnt = 0;
    set<ll>row,col;
    vector<vector<char> >v(n,vector<char>(m));
    for(ll i = 0 ; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            cin>>v[i][j];
            if(v[i][j] == '#')
            {
                cnt++; // Keeping the count of total no of Black cells
                col.insert(j); // Keeping the record which column has a black cell
                row.insert(i); // Doing same for the rows
            }
        }
    }
    set<ll> :: iterator itr;
    if(cnt == 0) // See example test case 5
    {
        cout<<0;
        return 0;
    }
    ll flag = 0;
    /* First we'll check if the assignment is really possible or not. Since every black cell needs to be traversed,
    we can blindly assign all the black cells with a south magnet.
     Assignment will not be possible in the following 2 cases -

     1. If there exists a sequence of white cells ('.') between two sequences of black cells ('#').
     Because in that case it will be impossible for a north magnet two traverse all black cells
     without traversing any white cell. for ex.- ###...### this case will not be possible

     2. Suppose there is no black cell in a particular row hence no south magnet is assigned as of now.
     So we try to find a cell in that row which has no black cell in the corresponding column and we assign
     that cell with a south magnet. However, if we are unable to find such cell than assignment is not possible.
     same goes for every column.
     */

     // Doing for every row.
    for(ll i = 0; i < n; i++)
    {
        set<ll>s;
        ll flag1 = 0;
        for(ll j = 0; j < m; j++)
        {
            if(v[i][j] == '#') // Building set to check condition 1
                s.insert(j);
            if(col.find(j) == col.end()) // Condition 2 is checked
                flag1 = 1;
        }
        if(s.size() == 0 && !flag1) // If no black cell is present and there is no column with no black cell
        {
            flag = 1;
            break;
        }
        for(ll j = 0; j < m; j++) // Condition 1 is checked
        {
            if(v[i][j] == '.')
            {
                if(s.upper_bound(j) == s.end() || s.upper_bound(j) == s.begin())
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
            break;
    }
    if(flag)
    {
        cout<<-1;
        return 0;
    }

    // Doing the same thing for every column.
    for(ll j = 0; j < m; j++)
    {
        set<ll>s;
        ll flag1 = 0;
        for(ll i = 0; i < n; i++)
        {
            if(v[i][j] == '#')
                s.insert(i);
            if(row.find(i) == row.end())
                flag1 = 1;
        }
        if(s.size() == 0 && !flag1)
        {
            flag = 1;
            break;
        }
        for(ll i = 0; i < n; i++)
        {
            if(v[i][j] == '.')
            {
                if(s.upper_bound(i) == s.end() || s.upper_bound(i) == s.begin())
                    continue;
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
            break;
    }
    if(flag)
    {
        cout<<-1;
        return 0;
    }

    /*Running a BFS to find no of connected components as no of connected components
    will be equal to no of required north magnets.*/

    queue<pair<ll,ll> >q;
    vector<vector<ll> >vis(n,vector<ll>(m));
    ll ans = 0;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            if(vis[i][j] == 1 || v[i][j] == '.')
                continue;
            ans++;
            q.push(mp(i,j));
            vis[i][j] = 1;
            while(!q.empty())
            {
                ll fi = q.front().first;
                ll se = q.front().second;
                q.pop();
                if(fi-1 >= 0 && v[fi-1][se] == '#' && !vis[fi-1][se])
                {
                    q.push(mp(fi-1,se));
                    vis[fi-1][se] = 1;
                }
                if(se-1 >= 0 && v[fi][se-1] == '#' && !vis[fi][se-1])
                {
                    q.push(mp(fi,se-1));
                    vis[fi][se-1] = 1;
                }
                if(fi+1 < n && v[fi+1][se] == '#' && !vis[fi+1][se])
                {
                    q.push(mp(fi+1,se));
                    vis[fi+1][se] = 1;
                }
                if(se+1 < m && v[fi][se+1] == '#' && !vis[fi][se+1])
                {
                    q.push(mp(fi,se+1));
                    vis[fi][se+1] = 1;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
