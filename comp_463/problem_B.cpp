#include <bits/stdc++.h>
using namespace std;
int main(){
  
  int N;
  char X;
  vector<string> seats;  
  bool found = false;
  cin >> N >> X;
  
  for(int i{}; i < N; ++i){
    string s;
    cin >> s;             
    seats.push_back(s);
  }
  
  for(int i{}; i < N; ++i){
    if(seats[i][X-'A'] == 'o'){
        found = true;
        break;
    }
  }
  
  if(found)
    cout << "Yes";         
  else
    cout << "No";         
  
  return 0;
}