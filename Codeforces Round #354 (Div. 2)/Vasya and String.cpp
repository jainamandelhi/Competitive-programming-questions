#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    int n,k,maxf;
    cin>>n>>k;
    string s;
    cin>>s;
    int a=0,b=0;
    if(k==0)
    {
        int ans=0,temp=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
                temp++;
            else{
                ans=max(ans,temp);
                temp=0;
            }
        }
        cout<<max(ans,temp)+1;
        return 0;
    }
    for(int i=0;i<n;i++)
        if(s[i]=='a')
            a++;
        else
            b++;
    if(a<=k || b<=k)
    {
        cout<<n;
        return 0;
    }
    if(1)
    {
        vector<int>va;
        for(int i=0;i<n;i++)
            if(s[i]=='a')
                va.pb(i);
        k++;
        int j=-1,maxi=0;
        for(int i=0;i<a;i++)
        {
            if(k+j<a)
            {
                if(i==0)
                    maxi=va[k+j];
                else
                    maxi=max(maxi,va[k+j]-va[j]-1);
            }
            else
                maxi=max(maxi,n-va[a-1-k+1]-1);
            j++;
        }
        maxf=maxi;
    }
   // cout<<maxf<<endl;
        vector<int>va;
        for(int i=0;i<n;i++)
            if(s[i]=='b')
                va.pb(i);
        int j=-1,maxi=0;
    //    cout<<maxi<<endl;
        for(int i=0;i<b;i++)
        {
     //       cout<<"IL "<<maxi<<endl;
            if(k+j<b)
            {
                if(i==0){
                    maxi=va[k+j];
                }
                else
                    maxi=max(maxi,va[k+j]-va[j]-1);
            }
            else
                maxi=max(maxi,n-va[b-1-k+1]-1);
            j++;
        }
      //  cout<<"OL: "<<maxi<<endl;
        maxf=max(maxi,maxf);
    cout<<maxf;
    return 0;
}
