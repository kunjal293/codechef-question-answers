//problem statement : https://www.codechef.com/SEP221D/problems/BOBBANK

#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
 int a,b,x,y; 
 cin>>a>>b>>x>>y;


float p=(float)a/x; 
float q=(float)b/y;


if(p==q) cout<<"Equal "<<endl;


else if(p>q) cout<<"Alice"<<endl;

else cout<<"Bob"<<endl;


return;


}

int main(){
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    
    return 0;
}