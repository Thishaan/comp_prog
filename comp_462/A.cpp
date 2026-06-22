#include <bits/stdc++.h>
using namespace std;
int main(){
  
  int N,K, curr;
  cin >> N;
  vector<vector<int>> rec(N); // receivers  -> senders 
  
  for(int i{}; i < N; ++i){
    cin >>K;
    for(int j{}; j < K; ++j){
      cin >> curr;
     // lines[i].push_back(curr);
      rec[curr - 1].push_back(i+1);
    }
  }

  for(int i{}; i < N; ++i){
    cout << rec[i].size() << " ";
    for(int j{}; j < (int)rec[i].size(); ++j){
     cout << rec[i][j] << " ";
    }
    cout << endl; //
  }
  return 0 ;
 }

