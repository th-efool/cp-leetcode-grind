#include <bits/stdc++.h>
using namespace std;


int main() {
    // TAKING INPUT
    int n;
    cin >> n;
    
    if (n<3 || (n%4)!=3){
        cout << "NO" << endl;
        return 0;
    }
    
    vector<int> list1;
    vector<int> list2;
    list1.push_back(1);
    list1.push_back(2);
    list2.push_back(3);
    for (int i=4; i<=n; i++){
        if (i%4==0 || i%4==3 ){
            list1.push_back(i);
        }
        if (i%4==1 || i%4==2 ){
            list2.push_back(i);
        }        
    }
    cout << "YES" << endl;
    cout << list1.size() <<endl;
    for (auto x: list1){cout << x <<" ";}
    cout << endl;
    cout << list2.size() <<endl;
    for (auto x: list2){cout << x <<" ";}
    cout << endl;
    return 0;
}