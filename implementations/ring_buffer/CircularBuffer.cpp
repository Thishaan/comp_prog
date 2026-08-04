#include <exception>
#include <iostream>
#include <optional>
#include <cstring>

template <typename T>
class CirculBuffer{



    private:
        size_t capacity;
        size_t l;
        size_t r; // left and right pointers  
        T* arr; // underlying array;

    public:

     explicit CirculBuffer(size_t cap): capacity{cap}, l{}, r{}{

     CirculBuffer operator=(CirculBuffer & other){
        
        
        other.capaicty = capacity;
        other.r = r;
        other.l = l;

        // handle allocation separately
        other.arr = new T[capacity];

        std::memcpy(arr,other.arr, sizeof(T)*capacity)


     }
        if(cap < 1){
            throw  std::out_of_range("invalid capacity, D NOT COSTRUCT");
        }
        arr = new T[cap];   // allocate on heap 
     }
    

     void push(T elem){

        if(capacity == (r-l)){
         //  throw std::out_of_range("size curently equals capacity");
        }
        arr[r]  = T;
        r = (r+1)%capacity;

     }


std::optional<T> pop(){

        if((r-l) ==0){
           // throw std::out_of_range("size curently 0, cannot pop!");
           return std::nullopt;  // didnt knw ts existed
        }
        T item_ret = arr[l];// brev
        l = (l+1)%capacity;
        return item_ret;
     }


     ~CirculBuffer(){
        delete[] arr;
     }
     //   std::optional<T>
};



int main(){

    std::cout<< "placeholding rn" << std::endl;

    return 0;
}