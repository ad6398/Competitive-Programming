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
    int n,m;
    cin>>n>>m;
    int a[n][m];
    f(i,0,n) f(j,0,m) cin>>a[i][j];
    vector<pair<int,int> > pr;
    bool vis[n][m];
    memset(vis,false,sizeof(vis));
    f(i,0,n-1) f(j,0,m-1)
    {
        if(a[i][j]==1 and
        a[i+1][j]==1 and
        a[i][j+1]==1 and
        a[i+1][j+1]==1 
        // vis[i][j]==false and
        // vis[i+1][j]==false and
        // vis[i][j+1]==false and
        // vis[i+1][j+1]==false 

        )
        {
            vis[i][j]= true;
        vis[i+1][j]= true;
        vis[i][j+1]= true;
        vis[i+1][j+1]= true;
        pr.pb(mp(i,j));
        }
    }
    bool flg= false;
    f(i,0,n) f(j,0,m) if(a[i][j]==1 and vis[i][j]== false) flg= true;
    if(flg)
    {
        cout<<-1<<endl;

    }
    else
    {
        cout<<pr.size()<<endl;
        f(i,0,pr.size()) cout<<pr[i].F+1<<" "<<pr[i].S+1<<endl;
    }
    
    return 0;
}


