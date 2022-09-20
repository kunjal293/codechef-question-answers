//problem statement :https://www.codechef.com/problems/MAXOR

#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){

ll n; 
cin>>n;

vector<ll> arr(n);
 unordered_map<ll,ll> m;

for (int i=0;i<n;i++){


cin>>arr[i];

m[arr[i]]++;
}
ll ans=0;


for (auto i:m){

if(i.second >1){

int x=i.second;
ans+=x*(x-1)/2;
}
}
cout<<ans<<endl;
return ;
}
