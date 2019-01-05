#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int o=0,c=0;
        string s;
        cin>>s;
        int m=s.size();
        for(int j=0;j<m;j++)
        {
            if(s[j]==')')
            {
                if(o>0)
                    o--;
                else
                    c--;
            }
            else
                o++;
        }
        if(o>0 && c>0)
            continue;
        else
            if(o==0)
                arr.pb(c);
            else if(c==0)
                arr.pb(o);
    }
    sort(arr.begin(),arr.end());
    int i=0,j=arr.size()-1;
    int ans=0;
    while(i<j)
    {
        if(arr[i]+arr[j]==0)
        {
            i++;
            j--;
            ans++;
        }
        else if(arr[i]+arr[j]<0)
            i++;
        else
            j--;
    }
    cout<<ans;
    return 0;
}
