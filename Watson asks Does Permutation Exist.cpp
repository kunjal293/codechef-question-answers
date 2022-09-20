//Watson asks Does Permutation Exist.cpp
//problem statement :https://www.codechef.com/problems/PERMEXIS

// 3 test casesare considered
//first we sort the array and if satisfy the condition it gives output as "yes"
#include<iostream>

using namespace std;


int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for (int  p = 0; p < n; p++)
        {
            cin>>a[p];
        }
        int c=0;
        for (int p = 0; p < n; p++)
        {
            if (a[p+1]-a[p]==1)
            {
                c++;
            }
            else if (a[p+1]-a[p]==0)
            {
                c++;
            }
            else if (a[p+1]-a[p]==-1){
                c++;
            }


        }
        if (c==n-1)
        {
            cout<<"YES"<<endl;

        }
        else{cout<<"NO"<<endl;}



    }

    return  0;
}
