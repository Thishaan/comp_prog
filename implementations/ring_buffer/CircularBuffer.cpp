#include <exception>
#include <iostream>
#include <optional>
#include <cstring>

template <typename T>
class CirculBuffer{



    private:
        size_t capacity;
        size_t count;
        size_t l;
        size_t r; // left and right pointers  
        T* arr; // underlying array;
        

    public:

     explicit CirculBuffer(size_t cap): capacity{cap}, l{}, r{}, count{},arr{nullptr} {
        if(cap < 1){
            throw  std::out_of_range("invalid capacity, D NOT COSTRUCT");
        }
        arr = new T[cap];   // allocate on heap 
     }
    CirculBuffer& operator=(const CirculBuffer& other){

        if (this == &other) return *this;
        
        if(arr)
            delete[] arr;              // free what this currently owns

        capacity = other.capacity;
        r = other.r;
        l = other.l;
        count = other.count;

        arr = new T[capacity];
        for (size_t i = 0; i < count; ++i){
            arr[i] = other.arr[i]; // element-wise, not memcpy
        }

        return *this;
    }


     
    

     void push(T elem){

        if(capacity == count){
         //  throw std::out_of_range("size curently equals capacity");
        }
        arr[r]  = elem;
        r = (r+1)%capacity;
        count++;

     }


std::optional<T> pop(){

        if(count ==0){
           // throw std::out_of_range("size curently 0, cannot pop!");
           return std::nullopt;  // didnt knw ts existed
        }
        T item_ret = arr[l];// brev
        l = (l+1)%capacity;
        count -=1;
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