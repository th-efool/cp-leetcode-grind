#include <bits/stdc++.h>
using namespace std;



int main() {
    string s;
    cin >> s;
    
    int LongestStreak =1;
    char prev = 'x';
    int CurrentStreak=1;
    for (int i=0; i<s.length() ; i++){
        if (s[i]==prev){
            CurrentStreak++;
            if (CurrentStreak>LongestStreak){
                LongestStreak = CurrentStreak;
            }
            continue;
        }
        prev = s[i];
        CurrentStreak=1;    

    }

    std::cout << LongestStreak;
    return 0;
}
