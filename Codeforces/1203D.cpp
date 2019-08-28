#include <bits/stdc++.h>
using namespace std;
#define f(i,x,y) for(int i=x;i<y;i++)
#define ll long long int
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)

ll Gcd(ll a, ll b)
{
    if(b==0 ) return a;
    return Gcd(b,a%b);
}

int main()
{

    int n;
    cin>>n;
    ll ar[n];
    f(i,0,n) cin>>ar[i];
    ll gcd= ar[0];
    f(i,1,n) gcd= Gcd(gcd, ar[i]);
    int ans=0;
    for(ll i= 1; i*i<= gcd; i++)
    {
        if(gcd%i==0)
        {
            if(i*i!= gcd) ans++;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}


