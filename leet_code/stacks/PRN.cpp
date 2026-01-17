#define isOperand(x) ( x == "*" || x == "+" || x == "-" || x == "/" )



class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        vector<int> nums;

        //prepare operands and nums


        for(auto token : tokens){

            if(isOperand(token)){

                int result;

                int op2 = nums.back();
                nums.pop_back();
                int op1 = nums.back();
                nums.pop_back();

                if(token == "+"){
                    result = op1 + op2;
                }
                else if(token == "-"){
                    result = op1 - op2;

                }
                else if(token == "*"){
                    result = op1 * op2;

                }
                else{
                    result = op1/op2;
                }
                
                nums.push_back(result);
            }

            else{   
                nums.push_back(stoi(token));
            }

        }
        
            return nums[0];
    }
};

