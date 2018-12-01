#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
       long long ans=-1,ans1=INT_MAX,ans2=INT_MAX,n,x,y,d;
       cin>>n>>x>>y>>d;
       if(x==y)
       {
           cout<<0<<endl;
           continue;
       }
       if(d==1)
       {
           cout<<abs(x-y)<<endl;
           continue;
       }
       if(y>x)
       {
           if((y-x)%d==0)
           {
               cout<<(y-x)/d<<endl;
               continue;
           }
       }
       if(x>y)
       {
           if((x-y)%d==0)
           {
               cout<<(x-y)/d<<endl;
               continue;
           }
       }
        if((y-1)%d==0)
        {
            ans1=x;
            if(ans1%d==0)
                ans1=ans1/d;
            else
                ans1=ans1/d+1;
            ans1=ans1+(y-1)/d;
        }
        if((n-y)%d==0)
        {
            ans2 = n-x;
            if(ans2%d==0)
                ans2/=d;
            else
                ans2=ans2/d+1;
            ans2=ans2+(n-y)/d;
        }
        if(ans1<INT_MAX || ans2<INT_MAX)
            ans=min(ans1,ans2);
        cout<<ans<<endl;
   }
}
