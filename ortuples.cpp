//or tuples solution for codechef starters all test cases passed 
//subscribe this channel for more amaziing content about the coding 
//to create this user friendly interface subscribe to the channel 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll

int32_t main(){
    int tc; cin>>tc;
    while(tc--){
        int p,q,r;
        cin>>p>>q>>r;

        int arr[4]={1,0,1,4};

        int ans=1;
        

        for(int i=0;i<30;i++){
            int x=((p>>i)&1);
            int y=((q>>i)&1);
            int z=((r>>i)&1);
            

            ans = ans*arr[x+y+z];
        }

        cout<<ans<<endl;
    }

    return 0;
}