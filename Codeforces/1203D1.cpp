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
    vector< int> ls[26] , tar[t.size()];

    f(i,0,s.size())
    {
        ls[s[i]-'a'].pb(i);
    }
    f(i,0,t.size())
    {
        f(j,0,ls[t[i]-'a'].size()) tar[i].pb(ls[t[i]-'a'][j]);
    }

    for(int i= t.size()-2;i>=0;i--)
    {
        int lst= tar[i+1][tar[i+1].size()-1];
        int k=0;
        while(k< tar[i].size())
        {
            if(tar[i][k]<lst) k++;
            else
                tar[i].erase(tar[i].begin()+k);
            
        }

    }
    f(i,1,t.size())
    {
        int mn= tar[i-1][0];
        int k=0;
        while(k< tar[i].size())
        {
            if(tar[i][k]> mn) k++;
            else
                tar[i].erase(tar[i].begin()+k);
            
        }
    }
    int ans=0;
    f(i,0,tar[0].size()) ans= max(ans, tar[0][i]);

    f(i,1,t.size()) ans= max(ans, tar[i][tar[i].size()-1]- tar[i-1][0]-1);
    f(i,0,tar[t.size()-1].size()) ans= max(ans, int(s.size()) - tar[t.size()-1][i]-1);
    cout<<ans<<endl;


    return 0;
}


