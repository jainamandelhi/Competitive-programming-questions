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
int arr[5000001];
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t;
    scanf("%d",&t);
    arr[1]=1;
    for(int i=2;i<=5000001;i++)
    {
        if(arr[i])
            continue;
        for(int j=1;j*i<=5000001;j++)
        {
            arr[i*j]=arr[i]+arr[j];
        }
    }
    for(int i=2;i<=5000001;i++)
        arr[i]+=arr[i-1];
    for(int i=0;i<t;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        printf("%d\n",arr[x]-arr[y]);
    }
}
