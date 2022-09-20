//problem statement : https://www.codechef.com/START56D/problems/FARAWAY


#include <bits/stdc++.h>
using namespace std;

void ans()
{
    long long n,m;
    cin >>n>>m;
    long long arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >>arr[i];
    }

    long long min = 1,mx = m;
    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += max(abs(arr[i] - 1),abs(arr[i] - mx));
    }

    cout <<sum<<endl;
}


int main() {
    int vahi;
	cin>>vahi;
	while(vahi--){
	    ans();
	}
	return 0;
}