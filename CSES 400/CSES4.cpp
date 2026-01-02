#include <bits/stdc++.h>
using namespace std;



int main() {
    long length;
    cin >> length;
    long long counter=0;
    long prev = 0;
    for (long i=0; i<length; ++i){
        long current = 0;
        cin >> current;
        
        if (prev>=current){
            counter = counter+(prev-current);
            //This is an crucial part, we aren't exactly increasing 
            // the previous since there's no point in us increasing it
            // however that leads to silly mistake 
            // if try to do `prev = current`, it's wrong
            // it doesn't account for you have increased to match the greatest previous
            // so prev=prev only here, you can even skip it
            // TO NOT ENCOUNTER THIS AT ALL WE COULD HAVE
            // NAMED IT AS LAST HIGHEST
            prev = current+(prev-current);
            continue;
        }
        prev=current;

    }
    cout << counter;
}
