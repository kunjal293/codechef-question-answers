//problem statement : https://www.codechef.com/SEP221D/problems/SUBARRY
//problem explaination :
//You are given an array AA of length NN.

//The interesting value of a subarray is defined as the product of the maximum and minimum elements 
//of the subarray.

//Find the minimum and maximum interesting value over all subarrays for the given array.

//Note: A subarray is obtained by deletion of several (possibly zero) elements from the beginning of 
//the array and several (possibly zero) elements from the end of the array.

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){ 
    ll n; 
    cin >> n;
    
    vector<ll> a(n);
    for(int i=0;i<n;i++) 
        cin >> a[i];
    
    ll ind = LLONG_MAX;
    for(ll i = 0; i < n; i++) {
        if(a[i] >= 0 && ind > a[i]) {
            ind = a[i];
            
        
        }
    }  
    ll low = *min_element(a.begin(), a.end());
    ll high = *max_element(a.begin(), a.end());
    if(ind == LLONG_MAX) {
        cout <<high *high << " " << low * low << endl;
}
    else {
        if(low < 0) {
            cout << low * high << " " << max(high * high, low * low) << endl;
        }
        else {
            cout << low * low << " " << high * high << endl;
        }
    }

} 

int32_t main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }

    return 0;
}