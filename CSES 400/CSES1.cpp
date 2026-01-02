#include <bits/stdc++.h>
using namespace std;

void Recurssive(long long n){
    if (n==1){return;}
    if (n%2==0){
        n=n/2;
        std::cout << n <<" " ; 
        Recurssive(n);
    }else {
        n=3*n+1;
        std::cout << n <<" " ; 
        Recurssive(n);
    }
}

int main() {
    long long n;
    cin >> n;
    std::cout << n <<" " ; 
    Recurssive(n);
    return 0;
}
