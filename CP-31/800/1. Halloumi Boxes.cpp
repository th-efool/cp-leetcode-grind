#include <bits/stdc++.h>
using namespace std;

void Evaluate(){
     int lengthArray;
    cin >> lengthArray;
    int lengthSubArrayMax;
    cin >> lengthSubArrayMax;
    
    long long Array[lengthArray];
    for (int i=0; i<lengthArray; ++i){
        cin>> Array[i];
    }

    long long prev = Array[0];
    if (lengthSubArrayMax==1){
        for (auto x : Array) { 
            if (x>=prev){
                prev =x;
                continue;
                }

            cout << "NO" << endl;
            return;
        }
        cout << "YES"<< endl;
    }
    
    
    if (lengthSubArrayMax>=2){
        cout << "YES"<< endl;
    }
    
    return;
}

int main() {
    int i;
    cin >> i;
    while (i--){
        Evaluate();
    }
    return 0;
   
}