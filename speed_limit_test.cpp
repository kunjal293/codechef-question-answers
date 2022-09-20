//this solution is for speed limit test 
//problem test :https://www.codechef.com/SEP221C/problems/SPEEDTEST
//problem explaination :Chef likes to play with cards a lot. 
//Today, he's playing a game with three cards. 
//Each card has a letter written on the top face and another (possibly identical) 
//letter written on the bottom face. Chef can arbitrarily reorder the cards and/or flip any of the cards
// in any way he wishes (in particular, he can leave the cards as they were). 
//He wants to do it in such a way that the letters on the top faces of the cards, read left to right, 
//would spell out the name of his favorite friend Bob.
//Determine whether it is possible for Chef to spell "bob" with these cards.

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
//like
//share
//subscribe for rest of the solutions 
//next video comes after 10 subscibers
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}