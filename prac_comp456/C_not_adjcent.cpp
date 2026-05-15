#include <bits/stdc++.h>


using namespace std;
using set =   unordered_set<char>; 

using ll  =  long long;

int main(){
  string S;
  cin >> S;
  ll len_curr{0};
  ll start{0}; // use to follow the index of loop 

 // as per the fking editorial 
  for(ll i =0;i < ll(S.length());i++){
  
     if(S[i] == S[i+1] ||  i+1 == ll(S.length()) ){
        len_curr += ((i- start +1) * ((i-start)+2)/2);
      	start = i+1;
    }

  }

   cout << len_curr % 998244353 << endl;

   return 0;

}

