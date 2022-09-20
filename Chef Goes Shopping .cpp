//Chef Goes Shopping .cpp
//problem statement :https://www.codechef.com/problems/CHEFSHOPPING
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> l(n);
	    vector<int> r(n);
	    for(int i=0;i<n;i++)    cin>>l[i];
	    for(int j=0;j<n;j++)    cin>>r[j];
	    long long int ans=0;
	    for(int i=0;i<n-1;i++){
	        ans+=min(l[i+1],r[i]);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
