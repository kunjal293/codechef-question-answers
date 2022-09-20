//problem statement : https://www.codechef.com/START56D/problems/KSUB
//question statement :
//you are given an array AA of NN positive integers. Let GG be the gcd of all the numbers in the array AA.

//You have to find if there exist KK non-empty, non-intersecting
// subarrays of AA for which the arithmetic 
//mean of the gcd of those KK subarrays equals GG.
//If there exist KK such subarrays, output YES, otherwise output NO.

#include<bits/stdc++.h>
using namespace std;

void mahiya(){
    int n,k;
    cin >> n >>k;
    vector<int> a;
    int x;
    int g = 0;
    for(int i=0; i<n; i++){
        cin >> x;
        g = gcd(g,x);
        a.push_back(x);
    }

    x=0;
    int count = 0;
    for(int i=0; i<n; i++){
        x =  gcd(x,a[i]);
        if(x==g){
            count++;
            x=0;
        }
    }
    if(count>=k)
        cout<< "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
  // your code goes here
  int tc; 
  cin>> tc;
  while(tc--)
      mahiya();
  return 0;
}