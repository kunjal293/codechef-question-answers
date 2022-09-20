#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll


int32_t main()
{
    int tc; 
    cin>>tc;
    while(tc--)
    {
        int n; 
        cin>>n;
        vector<int> arr(n);

        for(int i=0;i<n;i++) cin>>arr[i];

        int k; cin>>k;
        unordered_map<int,int> mp;

        for(int i=0;i<k;i++)
        {
            int x; cin>>x;
            mp[x]++;
        }

        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]==0)
            {
                cout<<arr[i]<<" ";
            }
        }

        cout<<endl;
    }


    return 0;
}