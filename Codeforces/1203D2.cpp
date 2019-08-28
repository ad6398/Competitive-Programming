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
    string s,t;
    cin>>s>>t;
    int n= s.size(), m= t.size();
    int l[m+1],r[m+1];
    int j=0;
    l[0]=-1;
    f(i,1,m+1)
    {
        while(j<n and t[i-1]!=s[j]) j++;
        l[i]=j;
        j++;
    }
    j=n-1;
    r[m]=n;
    for(int i=m-1;i>-1;i--)
    {
        while(j>-1 and t[i]!=s[j]) j--;
        r[i]=j;
        j--;
    }
    int ans=max(n-l[m]-1,r[0]);
        // cout<<l[m]<<endl;

    f(i,0,m) ans = max(ans, r[i]-l[i]-1);
    cout<<ans<<endl;

    return 0;
}


