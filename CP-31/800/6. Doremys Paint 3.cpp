#include <bits/stdc++.h>
using namespace std;

void Evaluate(){
    // TAKING INPUT
    int length;
    cin >> length;
    
    int Array[length];
    for (int i=0; i<length; i++){
        cin >> Array[i];
    }
    

    int uniqueint1=Array[0];
    int FreqInt1 =0;
    int uniqueint2=-1;
    int FreqInt2 =-1;
    for (int i=0; i<length; i++){
        if (Array[i] == uniqueint1){
            FreqInt1++;
            continue;
        }
        if (Array[i] == uniqueint2){
            FreqInt2++;
            continue;
        }
        // element was neither unique one or unique 2
        // we'll reject if it's any other elment
        // but let's check if we have initialized uniqueint2,
        // before early exiting & if it's already initialized
        // then that mean's that's a new value, calls for early exit
        if (uniqueint2 != -1){
            cout << "NO" << endl;
            return;
        } else {
            uniqueint2 = Array[i];
            FreqInt2=1;
        }
    }
    
    if (uniqueint2==-1){
        cout << "YES" << endl;
        return;
    } 

    int d = FreqInt1-FreqInt2;
    if (d==0 || d==1 || d==-1){
        cout << "YES" << endl;
        return;
    }


    
    cout << "NO" << endl;
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