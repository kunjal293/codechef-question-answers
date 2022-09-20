//problem statement : https://www.codechef.com/START56D/problems/CHEFGAMES
//In Chefland, a tennis game involves 44 referees.
//Each referee has to point out whether he considers the ball to be inside limits or outside limits.
// The ball is considered to be IN if and only if all the referees agree that it was inside limits.

//Given the decision of the 44 referees, help Chef determine whether the ball is considered inside limits or not.

//Input Format
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int r1,r2,r3,r4;
	    cin>>r1>>r2>>r3>>r4;
	    if(r1==1||r2==1||r3==1||r4==1)
	    {
	        cout<<"OUT"<<endl;
	    }
	    else
	    {
	        cout<<"IN"<<endl;
	    }
	}
	return 0;
}
