#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            m[a]++;
        }
        map<int,int>:: iterator itr;
        int ans=0;
        int l=0;
        for(itr = m.begin(); itr != m.end(); itr++)
        {
            int b1=itr->second,b2=itr->first;
            int a=l+b1;
            ans+=a/b2;
            l=a-a/b2*b2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
