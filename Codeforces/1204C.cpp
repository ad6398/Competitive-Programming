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
    int n; cin>>n;
    ll adj[n+1][n+1];
    string s;
    f(i,0,n) {
        cin>>s;

        f(j,0,n){
            if(s[j]=='0') adj[i+1][j+1]=0;
            else adj[i+1][j+1]=1;
        if(adj[i+1][j+1]==0 and i!=j) adj[i+1][j+1]= INT_MAX;
    }
    }
    int m; cin>>m;
    int path[m];
    f(i,0,m) cin>>path[i];
    f(k,1,n+1)
    {
        f(i,1,n+1)
        {
            f(j,1,n+1){
                adj[i][j]= min(adj[i][j], adj[i][k]+ adj[k][j]);
            }
        }
    }
    vector<int> ans;
    ans.pb(path[0]); int cp=1;
    f(i,1,m)
    {
        int ls= ans.size()-1;
        if(adj[ans[ls]][path[i]]< cp){
            cp=1; ans.pb(path[i-1]);
        }
        // else cout<<ans[ls]<<" "<<adj[ans[ls]][path[i]]<<endl;
        cp++;
    }
    ans.pb(path[m-1]);
    cout<<ans.size()<<endl;
    f(i,0,ans.size()) cout<<ans[i]<<" ";
    cout<<endl;
    



    return 0;
}


