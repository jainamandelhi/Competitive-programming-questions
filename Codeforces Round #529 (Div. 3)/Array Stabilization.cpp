#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(int i=3;;i++)
        {
            if((n*i)%180==0 && ((i-2)*180)/i>=n)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
