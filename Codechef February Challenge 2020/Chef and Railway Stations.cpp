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

ll f(ll o,ll u,set<ll>&x1,set<ll>&x2,set<ll>&y1,set<ll>&y2,
     unordered_map<ll,set<ll> >&ma)
{
    ll flag=0;
    set<ll>::iterator itr;
    if(ma.find(o)!=ma.end())
    {
        for(itr=ma[o].begin();itr!=ma[o].end();itr++)
        {
            ll b=*itr;
            ll c=o/b;
            if(u==0)
            {
                if(y1.find(c)!=y1.end() && y2.find(b)!=y2.end())
                {
                    flag++;
                }
            }
            else
            {
                if(x1.find(c)!=x1.end() && x2.find(b)!=x2.end())
                {
                    flag++;
                }
            }
        }
        return flag;
    }
    //set<ll>vis;
    //queue<ll>q;
    //q.push(o);
    //while(!q.empty())
   // {
       // ll a=q.front();
        //q.pop();
        //vis.insert(a);
        ll a=o;
        ll b=sqrt(o);
        while(b)
        {
            if(a%b==0)
            {
                ll c=a/b;
                ma[o].insert(b);
                ma[o].insert(c);
                //vis.insert(b);
                //vis.insert(c);
                if(u==0)
                {
                    if(y1.find(c)!=y1.end() && y2.find(b)!=y2.end())
                    {
                        if(b==c)
                            flag++;
                        else if(y1.find(b)!=y1.end() && y2.find(c)!=y2.end())
                        {
                        //cout<<u<<" "<<a<<" "<<b<<" "<<c<<endl;
                            flag+=2;
                        }
                       // cout<<u<<" "<<a<<" "<<b<<" "<<c<<endl;
                       else
                        flag++;
                    }
                    else if(y1.find(b)!=y1.end() && y2.find(c)!=y2.end())
                    {
                        //cout<<u<<" "<<a<<" "<<b<<" "<<c<<endl;
                        flag++;
                    }
                }
                else
                {
                    if(x1.find(c)!=x1.end() && x2.find(b)!=x2.end())
                    {
                        if(b==c)
                            flag++;
                        else if(x1.find(b)!=x1.end() && x2.find(c)!=x2.end())
                        {
                        //cout<<u<<" "<<a<<" "<<b<<" "<<c<<endl;
                            flag+=2;
                        }
                       // cout<<u<<" "<<a<<" "<<b<<" "<<c<<endl;
                       else
                        flag++;
                    }
                    else if(x1.find(b)!=x1.end() && x2.find(c)!=x2.end())
                    {
                        //cout<<u<<" "<<a<<" "<<b<<" "<<c<<endl;
                        flag++;
                    }
                }
                    //q.push(b);
                    //q.push(c);
                //break;
            }
            b--;

    }
    return flag;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    unordered_map<ll,set<ll> >ma;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        set<ll>x1,y1,x2,y2;
        vector<ll>xp,xn,xz,yp,yn,yz;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a>0)
                xp.pb(a);
            else if(a<0)
                xn.pb(abs(a));
            else
                xz.pb(a);
            if(a>0)
            {
                x1.insert(a);
            }
            else if(a<0)
            {
                x2.insert(abs(a));
            }
        }
        for(ll i=0;i<m;i++)
        {
            ll a;
            cin>>a;
            if(a>0)
                yp.pb(a);
            else if(a<0)
                yn.pb(abs(a));
            else
                yz.pb(a);
            if(a>0)
            {
                y1.insert(a);
            }
            else if(a<0)
            {
                y2.insert(abs(a));
            }
        }
        vector<ll>xpsqr,xnsqr,ypsqr,ynsqr;
        for(ll i=0;i<xp.size();i++)
            xpsqr.pb(pow(xp[i],2));
        for(ll i=0;i<xn.size();i++)
            xnsqr.pb(pow(xn[i],2));
        for(ll i=0;i<yp.size();i++)
            ypsqr.pb(pow(yp[i],2));
        for(ll i=0;i<yn.size();i++)
            ynsqr.pb(pow(yn[i],2));
        ll ans=0;
        for(ll i=0;i<xpsqr.size();i++)
        {
            ans+=f(xpsqr[i],0,x1,x2,y1,y2,ma);
        }
        for(ll i=0;i<xnsqr.size();i++)
        {
            ans+=f(xnsqr[i],0,x1,x2,y1,y2,ma);
        }
        for(ll i=0;i<ypsqr.size();i++)
        {
            ans+=f(ypsqr[i],1,x1,x2,y1,y2,ma);
        }
        for(ll i=0;i<ynsqr.size();i++)
        {
            ans+=f(ynsqr[i],1,x1,x2,y1,y2,ma);
        }
        if(xz.size()>0 || yz.size()>0)
        {
            ans=ans+xp.size()*(yp.size()+yn.size());
            ans=ans+xn.size()*(yp.size()+yn.size());
        }
        cout<<ans<<endl;
    }
}
