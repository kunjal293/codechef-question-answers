
#include<iostream>
using namespace std;
void prime_seive(int m)
{
    int prime[100]={0};
    int n;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]=0)
        {
            for(int j=1;j<=i;j++)
            {
                prime[i]=1;
            }
        }

    }
    for(int i=2;i<=n;i++)
    {
        if (prime [i]=0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}


int main ()
{
    int  n;
    cin>>n;

    return 0;
}
