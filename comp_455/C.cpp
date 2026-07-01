#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<size_t, size_t> counts;
    size_t N, K;
    cin >> N >> K;
    vector<size_t> A(N);
    size_t sum{};
    
    for(size_t i = {}; i < N; ++i){
        size_t num;
        cin >> num;
        A[i] = num;
        sum += A[i];
        counts[num]++;
    }
    
    vector<pair<size_t, size_t>> w(counts.begin(), counts.end());
    
    std::sort(w.begin(), w.end(), [](const auto& a, const auto& b) {
        return (a.first * a.second) < (b.first * b.second);
    });
    
    size_t end = w.size() - 1;
    
    for(size_t i = {}; i < K; ++i){
        if (i <= end)
          sum -= w[end - i].first * w[end - i].second;
    }
    cout << sum << endl;
    
    return 0;
}
