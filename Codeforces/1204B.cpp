#include <bits/stdc++.h>
using namespace std;
#define f(i,x,y) for(int i=x;i<y;i++)
#define ll long long int
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)

int main()
{
    string s;
    cin>>s;
    int ans=0, a=0;
    f(i,0,s.size()-1) if(s[s.size()-i-1]=='1') a=1;
    ans= (s.size()-2+a)/2 +1;
    if(s.size()<=1) ans=1;
    if(s=="0") ans=0;
    cout<<ans<<endl;
    return 0;
}


