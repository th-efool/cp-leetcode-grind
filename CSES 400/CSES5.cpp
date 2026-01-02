#include <bits/stdc++.h>
using namespace std;



int main() {
    long HighestIndex;
    cin >> HighestIndex;
    vector<long> evens;
    vector<long> odds;
    
    if (HighestIndex%2==0){
        long smallestOdd=1;
        long highestEvenIndex = HighestIndex;
        if (highestEvenIndex - smallestOdd ==1 ||highestEvenIndex ==-1  ){
            cout << "NO SOLUTION" ;
            return 0;
        }

    }
    if (HighestIndex%2==1){
       long smallestOdd=1;
       long highestEvenIndex = HighestIndex-1;
        if (highestEvenIndex - smallestOdd ==1 ||highestEvenIndex ==-1  ){
            cout << "NO SOLUTION" ;
            return 0;
        }
    }
    
    for (long i =1; i<=HighestIndex; ++i){
        if (i%2==0){evens.push_back(i); continue;}
        odds.push_back(i);
    } 
    // WE ARE CHOOSING TO PRINT EvenAscending OddSeriesAscending
    for (long x : evens) {cout << x << " ";}
    for (long x : odds) {cout << x << " ";}
    return 0;
}
