//problem statement : https://www.codechef.com/SEP221D/problems/PBATTLE


//There are NN Pokemon trainers numbered from 11 to NN. Each trainer has one Pokemon.
//All the trainers have arrived to participate in a contest.
//There are two battle arenas, one in ground and other in water. 
//Each Pokemon may have different power in both the arenas.
//When two Pokemon fight in an arena, the Pokemon having higher power in that arena wins.
 //It is guaranteed that all Pokemon have distinct powers in the same arena to avoid any ties.

//The strength of a Pokemon trainer is determined to be the number of other Pokemon 
//his Pokemon can defeat in at least one arena.

//It is known that only the Pokemon trainers with the highest strength will qualify for the next round
// (multiple trainers may have the same strength). Find the number of Pokemon trainers who will qualify for the next round.

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n; cin>>n;
    vector<int> arr(n),code(n),aus(n),code(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
        aus[i]=arr[i];
    }

    for(int i=0;i<n;i++){
        cin>>code[i];
        sri[i]=code[i];
    }

    sort(aus.begin(), aus.end());

    sort(sri.begin(),sri.end());

    aus.erase(unique(aus.begin(),aus.end()),aus.end());

    sri.erase(unique(sri.begin(),sri.end()),sri.end());

    for(int i=0;i<n;i++){
        arr[i]=lower_bound(aus.begin(),aus.end(),arr[i])-aus.begin();
    }

    for(int i=0;i<n;i++){
        code[i]=lower_bound(sri.begin(),sri.end(),code[i])-sri.begin();
    }

    int temp=0,ans=0;

    vector<int> p(n),q(n),r,crr(n);

    for(int i=0;i<n;i++){
        crr[arr[i]]=code[i];
        p[i]=arr[i]+code[i];
        q[code[i]]=i;
    }

    for(int i=0;i<n;i++){
        r.insert(upper_bound(r.begin(),r.end(),crr[i]),crr[i]);
        p[q[crr[i]]]-=lower_bound(r.begin(),r.end(),crr[i])-r.begin();
    }

    for(auto  i:p){
        temp=max(i,temp);
    }

    for(auto i:p){
        ans+=(i==temp);
    }

    cout<<ans<<endl;

}

int32_t main(){
    int tc=1; 
    cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}