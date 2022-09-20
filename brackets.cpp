
//brackets.cpp
///input format
//The first line of the input contains one integer T denoting the number of testcases to process.
//The only line of each testcase contains one string A denoting Mike's parentheses sequence.
//It is guaranteed that A only consists of the characters '(' and ')'.
//It is also guaranteed that A is a valid parentheses sequence.
///output format
//closing bracket decrements the number by 1 and opening one increases the value by 1
//problem statement :https://www.codechef.com/problems/BRACKETS


#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string s;
	    cin >> s;

	    int balance = 0, max_balance = 0;
	    for(int i=0; i<s.size(); i++) {
	        if(s[i] == '(') {
	            balance++;
	        } else {
	            balance--;
	        }

	        max_balance = max(max_balance, balance);
	    }

	    for(int i=0; i<max_balance; i++) cout << "(";
	    for(int i=0; i<max_balance; i++) cout << ")";
	    cout << endl;
	}
	return 0;
}
