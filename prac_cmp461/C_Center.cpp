#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    long long counter = 0;
    size_t n = S.length();
    
    for (size_t i = 0; i < n; i++) {
        if (S[i] == 'C') {
    
            int reach = min(i, n - 1 - i);
            counter += reach + 1;  
        }
    }
    
    cout << counter << "\n";
    return 0;
}
