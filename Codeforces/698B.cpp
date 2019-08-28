#include <bits/stdc++.h>
using namespace std;
#define f(i,x,y) for(int i=x;i<y;i++)
#define ll long long int
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
int fpar(int x, int  par [])
{
    while(x!= par[x]) x= par[par[x]];
    return x;
}

void _union(int x, int y, int par [])
{
    int rutX= fpar(x, par), rutY= fpar(y, par);
    par[rutY]= rutX;
    return;
}

bool isloop(int x, int y, int par [])
{
    int rutX= fpar(x, par), rutY= fpar(y, par);
    // cout<<rutX<<" rut "<<rutY<<endl;
    if(rutX== rutY) return true;
    return false;
}


int main()
{
    int n;
    cin>>n;
    int ar[n], par[n+1], oar[n];
    f(i,0,n) 
    {
        cin>>ar[i];
        par[i+1]= i+1;
        oar[i]= ar[i];
    }
    
    int ans=0, cp=0;
    f(i,0,n) if(ar[i]== i+1) cp= ar[i];
    f(i,0,n)
    {
        if(!isloop(i+1,ar[i], par))
        {
            _union(ar[i], i+1, par);
        }
        if(par[i+1]== i+1){
            if(cp==0){
            cp= i+1;
            } 
                
                ar[i]= cp;
        } 
        if(oar[i]!=ar[i]) ans++;
            
    }
    cout<<ans<<endl;
    f(i,0,n) cout<<ar[i]<<" ";
    cout<<endl;
    

    return 0;
}


