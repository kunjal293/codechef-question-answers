//Broken Telephone.cpp
//problem statement :https://www.codechef.com/problems/BROKPHON
///input format
//The first line of the input contains an integer T denoting the number of test cases.
//The first line of each test case contains a single integer N denoting the number of players
//The second line contains N space-separated integers A1, A2, ..., AN denoting the messages of players.
///sample input
//3
//7
//1 1 1 3 3 3 2
//5
//1 3 1 1 1
//4
//5 5 5 5
///output
//4
//3
//0
///approch
//this is like a message game first and last message should be campared
//1 1 1 3 3 3 2 in this test case first second and third person have heard it correct but third maybe he whispered wrongly or
// fouth has heard wrongly so the total sum is 2 then 6 th person is guilty so we add 2 and the final answer comes out to be 2.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tg;
    cin >> tg;
    while (tg--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> count{};
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                count.insert(i);
                count.insert(i - 1);
            }
        }
        cout << count.size()<< endl;
    }

    return 0;
}

