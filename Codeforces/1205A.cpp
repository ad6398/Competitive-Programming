#include <bits/stdc++.h>
using namespace std;
#define f(i,x,y) for(int i=x;i<y;i++)
#define ll long long int
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define F first
#define S second
int main()
{
    ll t
    ;
    cin>>t;
    while(t--)
    {
        int b, p, f;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;
        int bg= b/2;
        int ans=0;
        if(h>c)
        {
            if(bg>p) ans+= p*h+ min(bg-p,f)*c;
            else ans+= bg*h; 
        }
        else
        {
            if(bg>f) ans+= f*c+ min(bg-f,p)*h;
            else ans+= bg*c; 
        }
        cout<<ans<<endl;
    }
    return 0;
}


