#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
#define mod = 35353535
long long mini = INT_MAX;
long long maxi = INT_MIN;
long long f(long long a)
{
    while(a)
    {
        mini = min(mini,a%10);
        maxi = max(maxi,a%10);
        a = a/10;
    }
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        k = k-1;
        for(long long i = 0; i < k; i++)
        {
            mini = INT_MAX;
            maxi = INT_MIN;
            f(n);
            n = n+maxi*mini;
            if(maxi*mini == 0)
                break;
            //cout<<mini<<" "<<maxi<<" "<<n<<endl;
        }
        cout<<n<<endl;
    }
    return 0;
}
