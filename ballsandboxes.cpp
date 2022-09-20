//problem statement : https://www.codechef.com/submit/BALLBOX
//You have NN balls and KK boxes. You want to divide the NN balls into KK boxes such that:

//Each box contains \ge 1≥1 balls.
//No two boxes contain the same number of balls.
//Determine if it is possible to do so.
#include<iostream>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n ,k;
		cin>>n>>k;
		int s= k*(k+1)/2;
		if(n>=s)
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