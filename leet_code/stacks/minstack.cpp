class MinStack {
public:

    vector<int> elements;
    vector<int> min;  //
    int min_val= INT_MAX;
    MinStack() {
      elements= {};
      min= {};
    }
    
    void push(int val) {
    
        if(elements.empty()){
            min.push_back(val);
            min_val =  val;
        }
        else{
            if(val < min_val){
                min.push_back(val);
                min_val =  val;

            }
            else{
                min.push_back(min_val);
            }

        }
        elements.push_back(val);

    }
    
    void pop() {
        elements.pop_back();
        min.pop_back();
        min_val = min[min.size() -1];
        }
    
    int top() {
        return elements[elements.size() -1];
        
    }
    
    int getMin() {
        return min[min.size()-1]; 
    }

};

