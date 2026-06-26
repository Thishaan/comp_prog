#include <bits/stdc++.h>

using namespace std;



int main(){
  string s;
  cin >> s;
  int str_len = (int)s.length();

  int ans{}, l , r; 
 
  for(int i ={}; i < str_len -1 ; i++){
      if(s[i] +1 !=  s[i+1] ){
        continue;
      }
      l = i;
      while(l > -1 && s[l] == s[i]){
        l--;
      }
      r= i+1;
      while(r < str_len && s[r] == s[i+1]){
        r++;
      }
    
   ans += min(i - l, r - i - 1);

  }
  cout << ans<< endl;
  
 return 0; 
}

