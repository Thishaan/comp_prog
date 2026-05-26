#include<bits/stdc++.h>

using namespace std;





int main(){
  
  string s, ret_s;
  int cutoff;
  
  
  cin >> s >> cutoff;
  
  ret_s = s.substr(cutoff, (int)s.size() -  2*cutoff );
 
 
 cout << ret_s<< "\n";
 
 return 0; 
}

