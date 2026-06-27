#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll N, X, Y;
vector<ll> A;

ll solution() {
    ll lowest = A[0];
    for (ll i = 0; i < N; i++) {
        lowest = min(lowest, A[i]);
    }
    ll sum = 0;
    for (ll i = 0; i < N; i++) {
        ll num = (A[i] - lowest) * Y;  // you were missing * Y
        ll den = Y - X;
        if (num % den != 0) return -1;
        ll curr = num / den;
        if (curr > A[i]) return -1;
        sum += (A[i] - curr);  // you had curr - lowest, wrong
    }
    return sum;
}

int main() {
    cin >> N >> X >> Y;
    for (ll i = 0; i < N; i++) {
        ll in;
        cin >> in;
        A.push_back(in);
    }
    ll soln = solution();  // you were missing ()
    cout << soln << endl;
    return 0;
}
