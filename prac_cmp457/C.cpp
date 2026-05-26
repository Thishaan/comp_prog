#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){

  ll N,K;
  ll num_elems;
  ll val;

  cin >> N >>K;

  ll curr_idx{0},  prev_idx{0};
  K-=1;
  
  vector<vector<ll>> seq_vecs(N);        
  vector<ll> C(N,0);
 //cout<<  N << K << endl;
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
for (ll i = 0; i < N; i++){            
    cin >> val;                          
    C[i] = val;    
//    cout<< val <<" \n";
}
for (ll i = 0; i < N; i++){   

    prev_idx= curr_idx;
    curr_idx +=seq_vecs[i][0]*C[i];
  //  cout << curr_idx;
    if(curr_idx > K){
    //  cout << "YAHOOO\n";
    cout << seq_vecs[i][(K - prev_idx) % seq_vecs[i][0] +1 ] << endl;
    break;
    }
}

  return 0;
}
