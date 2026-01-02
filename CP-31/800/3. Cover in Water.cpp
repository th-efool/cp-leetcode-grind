#include <bits/stdc++.h>
using namespace std;

void Evaluate(){
    int Output=0;
    // TAKING INPUT
    int NumberOfRows;
    cin >> NumberOfRows;
    string riverrows;
    cin >> riverrows;
    
    //PROCESSING
    char previous = 'X';
    char secondprevious = 'X';
    for (char current: riverrows){
        if (current !='.'){
            secondprevious = previous;
            previous = current;
            continue;
        }
        if (previous==secondprevious && previous=='w'){
            // we got infinite water source
            Output=2;
            break;
        }
        current = 'w';
        secondprevious = previous;
        previous = current;
        Output++;
    }
    
    cout << Output << endl;
}

int main() {
    int i;
    cin >> i;
    while (i--){
        Evaluate();
    }
    return 0;
   
}