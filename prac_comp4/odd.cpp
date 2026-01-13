#include <bits/stdc++.h>



using namespace std;
int main(){
  
  string word;
  
  map<char, int>  char_cnt;
  
  cin >> word;
  
  for(size_t i =0; i < word.length(); i++){
      char_cnt[word[i]] +=1;
  }
  
  for (auto &p : char_cnt) {
    
    if(p.second ==1)
    std::cout <<p.first << "\n";
  }

  return 0;
}
