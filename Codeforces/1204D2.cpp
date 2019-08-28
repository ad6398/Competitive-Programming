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
    string s;
    cin>>s;
    if(s.size()==1){
      cout<<"0"<<endl;
      return 0;  
    } 
    if(s[0]=='1' and s[1]=='1') s[0]='0';
    f(i,1,s.size()-1)
    {
        if(s[i-1]=='0' and s[i]=='1' and s[i+1]=='1'){
            s[i]='0';
        }
    }
    if(s[s.size()-2]=='0' and s[s.size()-1]=='1'){
        s[s.size()-1]='0';
    }
    cout<<s<<endl;
    return 0;
}


