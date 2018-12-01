#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    long long dp[26];
    dp[0]=1;
    dp[1]=1;
    for(long long i=2;i<26;i++)
    {
        if(i%2==1)
        {
            dp[i]=2*dp[i-1]+1;
        }
        else
            dp[i]=2*dp[i-1]-1;
    }
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<setprecision(9)<<dp[n]<<" "<<pow(2,n)<<" ";
    }
}
