//makeequal.cpp
//Chef has an array A having N elements.
//Chef wants to make all the elements of the array equal by repeating the following move.
//Choose any integer K between 1 and N (inclusive).
// Then choose K distinct indices i1,i2,…,iK, and increase the values of Ai1,Ai2,…,AiK by 1.
//Find the minimum number of moves required to make all the elements of the array equal.
///input format
//The first line contains T denoting the number of test cases. Then the test cases follow.
//The first line of each test case contains a single integer N denoting the number of elements in A.
//The second line of each test case contains N space separated integers A1,A2,…,AN.
///sample input
//2
//3
//1 3 1
//3
//2 2 2
///sample output
//2
//0
#include<iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,maxe=INT_MIN,x,mine=INT_MAX;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        maxe=max(x,maxe);
	        mine=min(mine,x);
	    }
	    cout<<maxe-mine<<endl;
	}
	return 0;
}


