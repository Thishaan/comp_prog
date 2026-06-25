#include <bits/stdc++.h>
using namespace std;
using pair_int = pair<int, int>;
int main() {
    int N;
    cin >> N;

    int ans{0};
    vector<pair<int,int>> points(N);
    for (int i = 0; i < N; i++) {
        cin >> points[i].first >> points[i].second;
    }
  sort(points.begin(), points.end(), [](const pair_int & a, const pair_int& b) {
      return a.first < b.first;
  });  

  int min_y{N+1};

  for(int i{}; i < N; ++i){
    if(points[i].second < min_y){
      ans+=1;
      min_y = points[i].second;
    }
  
  }

  cout << ans << endl;
}
