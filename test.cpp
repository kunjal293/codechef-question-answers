#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        string a,b;
        cin>>a>>b;
        int count[26] = {0};
        for(int j=0;j<a.length();j++)
        {
            count[a[j]-'a']++;
        }
        for(int j=0;j<b.length();j++)
        {
            count[b[j]-'a']++;
        }

        int num;
        cin>>num;
        bool found=true;
        for(int k = 0;k<num;k++)
        {
            string c;
            cin>>c;

            for(int m=0;m<c.length();m++)
            {
                if(count[c[m]-'a'] > 0)
                {
                    count[c[m]-'a']--;
                }
                else
                {
                    found=false;
                    break;
                }
            }
        }

        if(found)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
