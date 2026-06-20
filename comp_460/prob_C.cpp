#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
int main(){
  
  int N, M;
  cin >> N >> M;                   
  vector<ll> A;
  vector<ll> B;
  for(int i{}; i < N; ++i){        
      ll in;
      cin >> in;                   
      A.push_back(in);
  }
  for(int i{}; i < M; ++i){        
      ll in;
      cin >> in;                    
      B.push_back(in);
  }
  
  int res{};
  sort(A.begin(), A.end());       
  sort(B.begin(), B.end());
  
  int y{};
  for(int z{}; z < M; ++z){   
  
      while((y < N) && (A[y] * 2 < B[z]) ){  
            y++;
      }
      
      if(y < N){
        y++;
        res++;
      }
      
  }
  cout << res << endl;                    
  
  return 0;
}