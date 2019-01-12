#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
using namespace std;
struct node{
    char data;
    node *next;
};
int main()
{
    FAST
    ll n;
    cin>>n;
    ll max1=0,max2=0;
    while(n--)
    {
        char c;
        ll a,b;
        cin>>c>>a>>b;
        if(c=='+')
        {
            ll mini=min(a,b);
            ll maxi=max(a,b);
            max1=max(max1,mini);
            max2=max(max2,maxi);
        }
        else if(c=='?')
        {
            ll mini=min(a,b);
            ll maxi=max(a,b);
            if(mini>=max1 && maxi>= max2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
