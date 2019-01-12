#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int> >arr(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i]=mp(mp(a,b),i);
    }
    sort(arr.begin(),arr.end());
    vector<int>ans(n,2);
    ans[arr[0].second]=1;
    int l=arr[0].first.first;
    int r=arr[0].first.second;
    for(int i=0;i<n;i++)
    {
        if(arr[i].first.first<=r)
        {
            l = min(arr[i].first.first,l);
            r = max(arr[i].first.second,r);
            ans[arr[i].second]=1;
        }
    }
    for(int i=0;i<n;++i)
    {
        if(ans[i]==2)
        {
            for(int j=0;j<ans.size();j++)
            {
                cout <<ans[j]<< " ";
            }
            cout <<endl;
            return ;
        }
    }
    cout <<-1<<endl;
}

int main()
{
    FAST
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
