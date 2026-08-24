#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int N;
  cin >> N;
  string s;  
  vector<string> strs;

   for(int i ={}; i < N; ++i){
      cin >> s;
      transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return tolower(c); } 
                  );
      strs.push_back(s);
   }  
   
   map<string , int> count;
   
   for(auto & str : strs){
     count[str]++;
   }
   
   int mx{};
   for (auto& [str, freq] : count) {
    mx = max(mx, freq);
}

  cout << mx << endl;
  
  return 0;
}




