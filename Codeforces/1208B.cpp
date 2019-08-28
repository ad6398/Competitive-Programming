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

    int n;
    cin>>n;
    ll ar[n];
    f(i,0,n) cin>>ar[i];
    map<int, int > m, mr;
    vector<bool> visl(n,false), visr(n,false);
    f(i,0,n)
    {
        if(m.find(ar[i])==m.end())
        m[ar[i]]++;
        else
        {
            visl[i]= true;
        }
        
    }
    for(int i=n-1;i>-1;i--)
    {
        if(mr.find(ar[i])==mr.end())
        mr[ar[i]]++;
        else
        {
            vis[i]= true;
        }
    }
    int i=0,j=n-1;
    while(!visl[i] and i<n) i++;
    while(!visr[j] and j>-1) j--;
    int ans=0;
    if(i==n and j==-1) ans=0;
    else
    {
        ans= abs(j-i+1)
    }
    
    return 0;
}


