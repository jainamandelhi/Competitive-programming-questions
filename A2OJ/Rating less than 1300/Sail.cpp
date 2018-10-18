#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t=0;
    cin>>n;
    long long sx,sy,ex,ey;
    cin>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    for(long long i=0;i<n;i++)
    {
        long long x=0,y=0;
        if(s[i]=='E')
            x++;
        else if(s[i]=='W')
            x--;
        else if(s[i]=='N')
            y++;
        else
            y--;
        if(x!=0)
        {
            if(abs(ex-x-sx)<abs(ex-sx))
            {
                sx=x+sx;
            }
            t++;
        }
        if(y!=0)
        {
            if(abs(ey-y-sy)<abs(ey-sy))
            {
                sy=y+sy;
            }
            t++;
        }
        if(sx==ex && sy==ey)
            break;
      //  cout<<sx<<" "<<sy<<" "<<ex<<" "<<ey<<endl;
    }
    if(sx!=ex || sy!=ey)
        t=-1;
    cout<<t;
}
