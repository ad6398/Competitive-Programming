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
        ll n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        f(i,1,n-1) if(s[i]=='0' and s[i-1]=='1' and s[i+1]=='1') s[i]='1';
        ll ans= (n+1)*b+ n*a;
        int ud=0;
        // f(i,1,n) if(s[i]!=s[i-1]) ud++;
        int i=0;
        while(s[i]=='0') i++;
        if(i<n)
        ans+= a;
                    // cout<<ans<<endl;

        while(i<n)
        {
            ll cs=0; char ce= s[i];
            while(s[i]==s[i+1] and i<n-1)
            {
                cs++; i++;
            }
            cs++; i++;
            if(i==n) {
                ans+= a;
                break;}
            if(ce=='0')
            {
                ans+= min((cs-1)*b, 2*a);
            }
            else
            {
                ans+= (cs+1)*b;
            }
            
                        // cout<<ans<<endl;

        }
            cout<<ans<<endl;

    }
    return 0;
}


