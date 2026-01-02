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
    
  for (int i=0; i<length; i++){
        if (Array[0] > Array[i]){
            cout << "NO" << endl;
            return;
        } ;
    }    
    
    cout << "YES" << endl;
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