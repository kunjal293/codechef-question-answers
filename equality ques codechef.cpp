
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    long long int a[n];
	    long long int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    sum=sum/(n-1);
	    long long int b[n];
	    for(int i=n-1;i>=0;i--)
	    {
	        b[i]=sum-a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<b[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
