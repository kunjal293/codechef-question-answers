//even pairsum.cpp

//problem statement :https://www.codechef.com/problems/EVENPSUM


//You are given two positive integers A and B.
//Find the number of pairs of positive integers (X,Y) such that 1≤X≤A, 1≤Y≤B and X+Y is even.
///explaination
//The first line of the input contains a single integer T denoting the number of test cases.
//The description of T test cases follows.
//The first and only line of each test case contains two space-separated integers A and B.
//sample input
//4
//1 1
//2 3
//4 6
//8 9
///sample output
//1
//3
//12
//36


#include <iostream>
using namespace std;

#define int long long int
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int mod=1000000007;
    int t;
    cin>>t;
    while(t--){
        int a;cin>>a;
        int b;
        cin>>b;
        int even1=a/2;
        int odd1=a-even1;
        int even2=b/2;
        int odd2=b-even2;
        cout<<(odd1*odd2)+(even1*even2)<<endl;
    }
	// your code goes here
	return 0;
}

