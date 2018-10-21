#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h,w,p;
    cin>>h>>w>>p;
    int cnt=(2*w)+2*(h-2);
    h-=4;
    w-=4;
    p--;
    while(p--)
    {
        if(h && w)
        {
            cnt+=(2*w)+2*(h-2);
            h-=4;
            w-=4;
        }
        else
            break;
    }
    cout<<cnt;
}
