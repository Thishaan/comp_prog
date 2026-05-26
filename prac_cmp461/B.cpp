#include <bits/stdc++.h>
using namespace std;
int main(){
  
  int H,W;
  
  cin >> H >> W;
  
  vector<vector<int>> output(H, vector<int>(W, 0));
  
  for(int i =0; i < H; i ++){

    for(int j = 0; j < W; j ++){
        output[i][j] = ( H == 1 && W ==1) ? 0 : ( H == 1|| W ==1) ? 1 : 2;
        
        if( i > 0  && i < H-1){
          output[i][j]++;
        } 
        
        if(j > 0 && j < W-1){
        output[i][j]++;
        }
        
      cout << output[i][j] <<" ";
    }
      cout << "\n";
    
  }
  
  cout << "\n";


  
  return 0; 
}
