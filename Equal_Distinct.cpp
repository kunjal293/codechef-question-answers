//problem statement: https://www.codechef.com/problems/EQDIS
//explaination :Let F(S)F(S) denote the number of distinct elements in the array SS. For example, F([1, 2, 3, 2]) = 3, F([1, 2]) = 2.F([1,2,3,2])=3,F([1,2])=2.

//You are given an array AA containing NN integers. 
//Find if it is possible to divide the elements of the array AA into two arrays BB and CC such that :

//Every element of the array AA belongs either to array BB or to array CC.
//F(B) = F(C)F(B)=F(C).

#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int j=1;j<n;j++)
	    {
	        if(a[j]==a[j-1])
	        c++;
	    }
	    if(c==0 && n%2!=0)
	     cout<<"NO"<<endl;
	    else  
	     cout<<"YES"<<endl;
	    
	}
	return 0;
}