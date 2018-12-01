#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n,q,k;
    cin>>n>>q>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int a=0;
    string s;
    cin>>s;
    int dp[n];
    for(int i=0;i<n;i++)
    {
        int count=0,maxi=0,flag=0,r=0;
        for(int j=i;r<n;j++)
        {
            if(j==n)
                j=0;
            r++;
            if(arr[j]==1)
            {
                count++;
                if(count>k)
                {
                    dp[i]=k;
                    flag=1;
                    break;
                }
            }
            else
            {
                if(count>maxi)
                    maxi=count;
                count=0;
            }
            if(flag==0)
                dp[i]=max(maxi,count);
            //cout<<count<<" ";
        }
        //cout<<endl;
    }
   /* for(int i=0;i<n;i++)
        cout<<dp[i]<<" ";
        cout<<endl;*/
    for(int i=0;i<q;i++)
    {
        if(s[i]=='?')
        {
            cout<<dp[a]<<endl;
        }
        else
        {
            a--;
            if(a<0)
                a=n-1;
        }
    }
}
