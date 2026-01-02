#include <bits/stdc++.h>
using namespace std;

void Evaluate(){
    // TAKING INPUT
    int Number;
    cin >> Number;
    
    if (Number%3==1 || Number%3==2 ){
        cout << "First" << endl;
        return;
        
    }
    
    cout << "Second" << endl;
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