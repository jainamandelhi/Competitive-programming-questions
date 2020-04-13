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
    double a,b,c;
    cin>>a>>b>>c;
    double temp = b*b-4*a*c;
    if(temp < 0)
    {
        cout<<0;
        return 0;
    }
    if(a == 0 && b == 0)
    {
        if(c == 0)
            cout<<-1;
        else
            cout<<0;
        return 0;
    }
    if(a == 0)
    {
        cout<<1<<endl;
        double ans = -1*c;
        ans /= b;
        cout<<fixed<<setprecision(6)<<ans;
        return 0;
    }
    temp = sqrt(temp);
    double temp1 = -1*b+temp,temp2 = -1*b-temp;
    temp1 /= (2*a);
    temp2 /= (2*a);
    if(temp1 == temp2)
    {
        cout<<1<<endl;
        cout<<fixed<<setprecision(6)<<temp1;
        return 0;
    }
    cout<<2<<endl;
    if(temp1<temp2)
        swap(temp1,temp2);
    cout<<fixed<<setprecision(6)<<temp2<<" "<<temp1;
}
