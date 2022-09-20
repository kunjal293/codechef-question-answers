//chef and its ordinary problem.cpp
///explaination
//problem statement :https://www.codechef.com/problems/CHFIDEAL
//first, you need to help Chef pick a door (let's denote it by X). Then, the host opens a different door (let's denote it by Y)
// such that there is a goat behind this door, and asks Chef to pick an arbitrary door again (let's denote it by Z).
// You need to help Chef pick door Z too.
//You should do it in such a way that the probability of a car being behind door Z is maximised.
//If there are multiple optimal possible ways to pick doors for Chef, you may choose any one.

#include <iostream>
using namespace std;

int main() {
	int x;
	cout<<3<<endl;
	cin>>x;
	if(x==1){
	   cout<<2<<endl;
	}else{
	   cout<<1<<endl;
	}
	return 0;
}
