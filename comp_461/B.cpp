#include <bits/stdc++.h> 


using namespace std;


int main(){
  
  int N;
  cin>> N;
  
  unordered_map<int,int> A;
  unordered_map<int,int> B;
  int x;

  
  
  for(int i =0; i < N;i++){
       cin>>x;
       A[i+1] = x;
  }
  
  for(int i =0; i < N;i++){
    cin>>x;
    B[i+1] = x;
  }
  
  bool all_true= true;
  
  for(int i =1; i <= N;i++){
    if(i != B[A[i]])
      all_true= false;
  }
  
  
  if(all_true){
    cout <<"Yes"<<endl;
  }else{
  cout <<"No"<<endl;
  }
  
  
  
  return 0;
}
