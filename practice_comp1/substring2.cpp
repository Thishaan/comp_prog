#include <bits/stdc++.h>

using namespace std;

int solve_min(string S, string T, int N, int M){

  int min_ans = INT_MAX;
  int ans;

    for(int i = 0; i < N-M + 1; i++){
      ans = 0;
      for(int j =0; j < M; j++){
         
         if(S[i +j] >=  T[j]){

            ans += S[i+j] - T[j];

         }

         else {
         ans += S[i+j] - T[j]  + 10;

         }
      }

      min_ans = min(ans, min_ans);

    }
    return min_ans;
}


int main(){
  
  
  int N,M;
  
  string S,T;

  cin >> N >> M;

  cin >> S;
  cin >> T;
  
  int min = solve_min(S, T, N, M);
  

  cout << min<< endl;

  
  return 0;
}
