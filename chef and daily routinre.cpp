//problem statment :https://www.codechef.com/problems/CHEFROUT
//chef and daily routine
///explaination
// there will be three variables c,e,s
//here c means cooking
//e means eating
//s means sleeping
//this all activities should be done in a order
///input format
//The first line of the input contains an integer T denoting the number of test cases.
//The description of T test cases follows.
//The only line of each test case contains string s.
///sample input
//5
//CES
//CS
//CCC
//SC
//ECCC
///sample output
//yes
//yes
//yes
//no
//no

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int flag=0;
        for (int i = 0; i < s.length()-1; i++)
        {
            if(s[i+1]-s[i]<0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"no"<<endl;

        else
        cout<<"yes"<<endl;

    }
    return 0;
}
