
#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
using namespace std;
struct node{
    char data;
    node *next;
};
int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,r,d;
        cin>>l>>r>>d;
        if(d<l)
        {
            cout<<d<<endl;
            continue;
        }
        ll i=r/d;
        i++;
        cout<<i*d<<endl;
    }
    return 0;
}
