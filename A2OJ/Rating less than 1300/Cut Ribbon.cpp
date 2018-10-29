#include<bits/stdc++.h>
using namespace std;
int solve(int n,int a,int b,int c)
{
    if(n==0)
        return 1;
    if(n<0)
        return -1;
    int ans1=solve(n-a,a,b,c);
    int ans2=solve(n-b,a,b,c);
    int ans3=solve(n-c,a,b,c);
    return(max(ans1,max(ans2,ans3)));
}
int main()
{
    int n,a,b,c,maxi=-1;
    cin>>n>>a>>b>>c;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(n-(i*a+j*b)>=0 &&(n-(i*a+j*b))%c==0)
            {
                int k=(n-(i*a+j*b))/c;
                maxi=max(maxi,i+j+k);
            }
        }
    }
    cout<<maxi;
}
