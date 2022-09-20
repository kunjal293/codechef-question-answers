

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    int ans =x-y;
	    int solution= w+ans*z;
	    cout<<solution<<endl;
	    
	}
	return 0;
}
