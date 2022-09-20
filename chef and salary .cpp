//chef and salary .cpp
//problem statement :https://www.codechef.com/START16C/problems/HCAGMAM1
//sample input
//6 3
//111100110101100000101100011111
//8 2
//111010111101001010100100111101
//5 6
//011101010100101000001101000010
///sample output
//117
//152
//78


#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int Count=0,C=0,count1=0;
        int x,y;
        cin>>x>>y;
        char number[30];
        cin>>number;
        for(int i=0;i<=30;i++){
              number[i];
              if(number[i]=='1'){
                    C++;
                    Count++;
                if(count1<Count){
                   count1=Count;
                }
              }
              else{
                Count=0;
              }
        }
        int salary=C*x+count1*y;
        cout<<salary<<endl;
    }
    return 0;

}
