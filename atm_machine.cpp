//problem statement:https://www.codechef.com/submit/ATM2?tab=statement
//There is an ATM machine. 
//Initially, it contains a total of KK units of money people (numbered 11 through NN) 
//want to withdraw money; for each valid ii, the ii-th person wants to withdraw  units of money.

//The people come in and try to withdraw money one by one, in the increasing order of their indices.
// Whenever someone tries to withdraw money, if the machine has at least the required amount of money, 
//it will give out the required amount. Otherwise, it will throw an error and not give out anything;
// in that case, this person will return home directly without trying to do anything else.

//For each person, determine whether they will get the required amount of money or not.

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x<=k)
            {
               cout<<1;
               k=k-x;
            }
            else
            {
                cout<<0;
            }
        }
        cout<<"\n";
    }
    return 0;
}