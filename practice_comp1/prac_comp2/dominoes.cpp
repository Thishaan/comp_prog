#include<bits/stdc++.h>

using namespace std;

int main(){

  size_t right_most {0};
  size_t num_dominoes;
  cin >> num_dominoes;
  vector<int> dominoes;
  size_t i{0};
  
  for(size_t j =0; j < num_dominoes; j++){
    size_t element;
    cin >> element;
    dominoes.push_back(element);
  }



  if(dominoes[0] <= 1){
        i = num_dominoes;
  }
  while (i < num_dominoes && i <= right_most){

      

      right_most = max(right_most, i + dominoes[i] - 1);

       if (right_most >= num_dominoes - 1) {
            right_most = num_dominoes - 1;
            break;
        }         

        i++;
  }
  
  cout << right_most + 1 << endl;
  
  return 0;
}

