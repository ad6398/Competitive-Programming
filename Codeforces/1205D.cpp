#include <bits/stdc++.h>
using namespace std;
#define f(i,x,y) for(int i=x;i<y;i++)
#define ll long long int
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define F first
#define S second


ll md=998244353;



int main()
{
    ll n;
    cin>>n;
ll fac[n+1];
    fac[0]=1;
    f(i,1,n+1) fac[i]= (i* fac[i-1]%md)%md;
    vector< pair<ll,ll> > v(n), a(n), b(n);
    f(i,0,n) cin>>v[i].F>>v[i].S;
    a=v;
    sort(a.begin(), a.end());
    ll ans=1;
    ll i=0;
    ll p1=1;
    while(i<n)
    {
        ll cs=0;
        while(i<n-1 and a[i].F==a[i+1].F) {
            cs++;
            i++;
        }
        cs++; i++;
        p1= (p1* fac[cs])%md;

    }
    f(i,0,n){
        b[i].S= v[i].F;
        b[i].F = v[i].S;
    }

    sort(b.begin(), b.end());
    i=0;
    ll p2=1;
    while(i<n)
    {
        ll cs=0;
        while(i<n-1 and b[i].F==b[i+1].F) {
            cs++;
            i++;
        }
        cs++; i++;
        p2= (p2* (fac[cs])%md)%md;

    }
    ll p3=0;
    i=0;
    while( i<n-1 and a[i].S<=a[i+1].S) i++;
    if(i==n-1) {p3=1;i=0;}
    else i++;
    while(i<n)
    {
        ll cs=0;
        while(i<n-1 and a[i].F==a[i+1].F and a[i].S==a[i+1].S) {
            cs++;
            i++;
        }
        cs++; i++;
        p3= (p3* fac[cs])%md;

    }
    cout<<p1<<" "<<p2<<" "<<p3;
    ll fa= (fac[n]%md- (p1 +p2 - p3 +md) %md + md)%md;
    cout<<fa<<endl;

}