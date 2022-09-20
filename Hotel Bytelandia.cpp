//Hotel Bytelandia.cpp
//n is the number of guests
//T, the number of test cases
// we have to find number of guests present simultainously
//eg: the 3  guest comes at 1 pm and will leave at 5 ,6, and 7
//at point 3 all three guests  which is at 5.00 so answer is 3 pm
//eg:guest arrives at 1.00 and leaves at 10.00 but other guest comes at 10.00 and leaves at 15.00 so answer here comes out to be 1
//number of guests are from 1 to 100
///input cases
//3
//3
//1 2 3
//4 5 6
///solution ///
//first approch
//using sorting of vectors
#include <iostream>
using namespace std;

int main() {
	int testcases;
	cin >> testcases;

	int arr[testcases];
	for (int &i : arr) {
	    int totalGuests;
	    cin >> totalGuests;

	    int arriveTime[totalGuests], leaveTime[totalGuests];
	    for (int &j : arriveTime) cin >> j;
	    for (int &j : leaveTime)  cin >> j;

	    int max = leaveTime[0];
	    for (int j : leaveTime) if (j > max) max = j;

	    int check[max + 1] = {0};
	    for (int j = 0; j < totalGuests; j++) {
	        for (int k = arriveTime[j]; k < leaveTime[j]; k++) {
	            check[k]++;
	        }
	    }

	    i = 0;
	    for (int j : check) if (j > i) i = j;
	}

	for (int i : arr) cout << i << '\n';

	return 0;
}


