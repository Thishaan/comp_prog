#include<bits/stdc++.h>


using namespace std;

int main(){
  vector<int> nums;
  int num_elements;
  int element;
  
  int i=0;
  int j;
  cin  >> num_elements;
  while(i < num_elements){
    cin  >> element;
    nums.push_back(element);
    int s  =  nums.size();
    if ((nums.size() >= 4) && (nums[s-1] == nums[s-2]) && (nums[s-3] == nums[s-2]) && (nums[s-3]== nums[s-4])){
          for(j = 0; j <4 ; j++){
            nums.pop_back();
          }
    }
    i+=1;
  }
  cout << nums.size() << std::endl;
  return 0;
}
