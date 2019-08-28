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
    int n, m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<pair<int,int > > edge(m);
    int deg[n+1];
    memset(deg,0,sizeof(deg));

    f(i,0,m) cin>> edge[i].F>> edge[i].S ;
    vector< int> adj[n+1];
    f(i,0,m) {
        adj[edge[i].F].pb(edge[i].S);
        deg[edge[i].S]++;
    }

    queue<int> q;
    f(i,1,n+1){
        if(deg[i]==0) q.push(i);
    }

    vector< vector<int> > dp(n+1, vector<int> (26,0));
    // f(i,1,n+1) dp[i][s[i-1]-'a']=1;

    int tt=n;
    while(tt and !q.empty())
    {
        int cp= q.front();
        dp[cp][s[cp-1]-'a']++;
        // cout<<cp<<endl;
        q.pop();
        f(i,0, adj[cp].size())
        {
            f(j,0,26) dp[adj[cp][i]][j]= max(dp[cp][j],dp[adj[cp][i]][j]);
            deg[adj[cp][i]]--;
            if(deg[adj[cp][i]]==0) q.push(adj[cp][i]);
        }
        tt--;
        // cout<<tt<<endl;
    }
    
if(tt!=0)
{
    cout<<-1<<endl;

    return 0;
}

int ans=0;
f(i,1,n+1)
{
    f(j,0,26) ans= max(ans, dp[i][j]);
}

cout<<ans<<endl;
    return 0;
}


