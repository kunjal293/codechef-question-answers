//Chef in Vaccination Queue.cpp
//problem statement :https://www.codechef.com/problems/CHEFVACATION
//sample input
//3
//4 2 3 2
//0 1 0 1
//3 1 2 3
//1 0 1
//3 3 2 2
//1 1 1
///sample output
//5
//3
//6
#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        
        if(x>z || y>z)
        {
            cout<<"No\n";
        }
        else
        {
            if(x+y<=z)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"No\n";
            }
        }
    }
    return 0;
}
