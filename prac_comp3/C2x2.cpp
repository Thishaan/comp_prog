#include<bits/stdc++.h>

using namespace std;
using ll = long long;


void solve(){
  [[maybe_unused]] ll N;
  ll M, r,c;
  ll counter{}; 
  
  cin >> N >> M;
  
  set<pair<ll,ll>> s;  
  
  for(ll i =0; i < M ; i++){
      cin >> r>>c;
      
      if(s.count({r,c}) || s.count({r+1,c+1}) || s.count({r+1,c}) || s.count({r,c+1})){
        
      continue;
      }
      
      else{
        s.insert({r,c});
        s.insert({r,c+1});
        s.insert({r+1,c});
        s.insert({r+1,c+1});
        counter++;
      }
  }
  
    cout <<counter <<endl;

  
}



int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  solve();
  
}

