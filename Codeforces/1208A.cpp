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
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n; cin>>a>>b>>n;
        if(n%3==0) cout<<a<<endl;
        else if(n%3==1) cout<<b<<endl;
        else 
        {
            ll c= a^b;
            cout<<c<<endl;}
    }

    return 0;
}


