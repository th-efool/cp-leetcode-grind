#include <bits/stdc++.h>
using namespace std;



int main() {
    long length;
    cin >> length;
    // 0 is identity XOR
    long long missingSequence =0;
    // Last number doesnt get accounted in the for loop, so we doing it through this
    long long XORFullSequence = length;
    for (long long i=0; i<length-1; i++){
        XORFullSequence = (XORFullSequence^(i+1));
        long long j=0;
        cin >> j;
        missingSequence = (missingSequence^j);
    }
    
    std::cout <<   (missingSequence^XORFullSequence);  

    return 0;
}
