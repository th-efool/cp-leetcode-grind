#include <bits/stdc++.h>
using namespace std;



int main() {
    long output=0;
    long numberOfInputs;
    cin >> numberOfInputs;
    for (int i=0; i<numberOfInputs; ++i){
        long y; cin>>y;
        long x; cin>>x;
        long innerEdgeLength = std::max(x,y)-1;
        long innerEdgePathLength = (innerEdgeLength)*(innerEdgeLength);
        long OuterEdgePathLength=0;
        if (innerEdgeLength%2==0){
            OuterEdgePathLength = (x-0)+(innerEdgeLength+1-y);
        } else {
            OuterEdgePathLength = (y-0)+(innerEdgeLength+1-x);
        }
        long value  = innerEdgePathLength+OuterEdgePathLength;
        std::cout << value << std::endl;
    }
    
    
}
