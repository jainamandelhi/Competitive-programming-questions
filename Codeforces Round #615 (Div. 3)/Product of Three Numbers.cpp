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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a=sqrt(n);
        ll ans1,ans2,ans3;
        ll flag=0;
        while(a>1)
        {
            if(n%a==0)
            {
                ans1=a;
                ans2=n/a;
                flag=1;
                break;
            }
            a--;
        }
        //cout<<ans1<<" "<<ans2<<endl;
        if(flag==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        flag=0;
        a=sqrt(ans2);
        while(a>1)
        {
            if(ans2%a==0 && a!=ans2/a && a!=ans1 && ans2/a!=ans1)
            {
                ans3=ans2/a;
                ans2=a;
                flag=1;
                break;
            }
            a--;
        }
        //cout<<ans1<<" "<<ans2;
        if(flag==0)
        {
            a=sqrt(ans1);
            while(a>1)
            {
                if(ans1%a==0 && a!=ans1/a && a!=ans2 && ans1/a!=ans2)
                {
                    ans3=ans1/a;
                    ans1=a;
                    flag=1;
                    break;
                }
                a--;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }
}
