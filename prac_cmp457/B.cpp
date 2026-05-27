#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){

  ll N,K;
  ll num_elems;
  ll val;
  ll X,Y;

  cin >> N;

  ll curr_idx{0},  prev_idx{0};
  
  vector<vector<ll>> seq_vecs(N);        
  vector<ll> C(N,0);
for (ll i = 0; i < N; i++){             
    cin >> num_elems;                   
    seq_vecs[i].push_back(num_elems);
    for(ll j = 0; j < num_elems ;j++){
      cin >> val;                       
      seq_vecs[i].push_back(val);
  //    cout<<  val;
    } 
//  cout<<"\n";
}

cin >> X >> Y;

cout << seq_vecs[X-1][Y] << endl;

}
