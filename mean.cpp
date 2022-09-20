#include<iostream>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		int y;
		cin>>x>>y;
	    cout<<min(3*x-2*y,y)<<" "<<y<<" "<<max(3*x-2*y,y)<<endl;
	}


	return 0;
}