#include <bits/stdc++.h>
using namespace std;
#define f(i,x,y) for(int i=x;i<y;i++)
#define ll long long int
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)

int main()
{
    ll n,l,r;
    cin>>n>>l>>r;
    ll ps=0, mnb=0, mxb=0;
    f(i,0,l) ps+= (1<<i);
    f(i,l,n) mnb+= 1;
    f(i,l,r) mxb+= (1<<i);
    f(i,r,n) mxb+= (1<<(r-1));
    cout<< ps+mnb<<" "<<ps+mxb<<endl;
    return 0;
}


