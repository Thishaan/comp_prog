#include <bits/stdc++.h>
#define WITHIN_CIRCLE(dist_sq, r1, r2) (dist_sq < (max(r1,r2) - min(r1,r2)) * (max(r1,r2) - min(r1,r2)))
using namespace std;
int main(){
  
  int T;
  long long x1,y1,x2,y2, r1,r2;
  
  vector<string> res;          
  
  cin >> T;                  
  
  for(int i{}; i < T; ++i){  
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    long long dist_betw_sq {(x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)};  
    long long radii_summed_sq = (r1+r2)*(r1+r2);
    
    bool within_cicle = WITHIN_CIRCLE(dist_betw_sq, r1, r2);
    
    if(dist_betw_sq <= radii_summed_sq && !within_cicle){  
      res.push_back("Yes");
    } else {
      res.push_back("No");
    }
  }
  
  for(int i{0}; i < T; ++i){
    cout << res[i] << endl; 
  }
  
  return 0;
}