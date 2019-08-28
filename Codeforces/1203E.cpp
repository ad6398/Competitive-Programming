#include <bits/stdc++.h>
using namespace std;
#define f(i,x,y) for(int i=x;i<y;i++)
#define ll long long int
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)

int main()
{
    int n;
    cin>>n;
    int ar[n];
    f(i,0,n) cin>>ar[i];
    map<int,int> m;
    f(i,0,n) m[ar[i]]++;
    m[0]=3;
    map<int,int>:: iterator it= m.begin(), tmp;
    int ans=0;
    it++;
    while(it!=m.end())
    {
        int p= it->second, k= it->first;
        // cout<<k<<p<<endl;
        tmp= m.find(k- 1);
        if(tmp== m.end() or tmp->second== 0)
        {
            p--;
            m[k-1]++;
            m[k]--;
        }
        // tmp= m.find(k+1);
        if( p>1)
        {
            m[k+1]++;
            m[k]--;
        }
        // if(it->second >0) ans++;
        it++;
    }
    it= m.begin();
    it++;
    while(it!=m.end())
    {
        // cout<<it->first<<" "<<it->second<<endl;
        if(it->second >0) ans++;
        it++;
    }
    cout<<ans<<endl;

    return 0;
}


