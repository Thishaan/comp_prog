#include <exception>
#include <iostream>

template <typename T>
class CirculBuffer{



    private:
        size_t size;
        size_t l;
        size_t r; // left and right pointers  
        T* arr; // underlying array;

    public:

     explicit CirculBuffer(size_t cap): capacity{capacity}, l{}, r{}, size{} {

        arr = new(T)[cap];   // allocate on heap 
     }
    

     void push( T & elem){

        if(capacity == ((r-l)+1)){
            throw std::out_of_range("size curently equals capacity");
        }
        arr[r]  = T;
        r = (r+1)%capacity;

     }


     void pop(){

        if(((r-l)+1) ==0){
            throw std::out_of_range("size curently 0, cannot pop!");
        }
        l = (l+1)%capacity;
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