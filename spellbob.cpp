//spelllbob.cpp
//problem statement :https://www.codechef.com/problems/SPELLBOB
//t is the number of test cases
#include <iostream>
using namespace std;
string solve()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1[0]=='o'||s2[0]=='o')
    {
        if((s1[1]=='b'||s2[1]=='b')&&(s1[2]=='b'||s2[2]=='b'))
        {
            return "yes";
        }
    }
    if(s1[1]=='o'||s2[1]=='o')
    {
              if((s1[0]=='b'||s2[0]=='b')&&(s1[2]=='b'||s2[2]=='b'))
        {
            return "yes";
        }


    }
     if(s1[2]=='o'||s2[2]=='o')
    {
              if((s1[0]=='b'||s2[0]=='b')&&(s1[1]=='b'||s2[1]=='b'))
        {
            return "yes";
        }


    }
    return "no";
}
int main ()
{
    long long int t;
    cin>>t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
