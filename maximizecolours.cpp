//problem statement : https://www.codechef.com/START56D/problems/COLOUR
//For the human eye, primary colours are red, green, and blue.

//Combining 11 drop each of any two primary colours produces a new type of secondary colour. 
//For example, mixing red and green gives yellow, mixing green and blue gives cyan, 
//and, mixing red and blue gives magenta.

//You have X, Y,X,Y, and ZZ drops of red, green, and blue colours respectively.
// Find the maximum total number of distinct colours (both primary and secondary)
 // you can have at any particular moment.

//Note: You cannot mix a secondary colour with a primary or another secondary colour 
//to get a new type of colour.

#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[3], s;
void jug()
{
    s = 0;
    cin >> a[0] >> a[1] >> a[2];
    for (int i = 0; i < 3; ++i)
        if (a[i] != 0)
        {
            a[i]--;
            s++;
        }
    for (int i = 0; i < 3; ++i)
        for (int j = i + 1; j < 3; ++j)
            if (a[i] > a[j])
                swap(a[i], a[j]);
    if (a[0] >= 2)
    {
        cout << s + 3 << endl;
        return;
    }
    if (a[0] == 1)
    {
        cout << (a[2] >= 2 ? s + 2 : s + 1) << endl;
        return;
    }
    cout << (a[1] == 0 ? s : s + 1) << endl;
}
signed main()
{
    int Tc;
    cin >> Tc;
    while (Tc--)
       jug ();
}