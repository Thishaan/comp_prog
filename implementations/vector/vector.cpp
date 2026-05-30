#include "vector.h"

template <typename T> 
void vector<T>::push_back(T elem){

    if(size == 0){
        arr = new T[2];
    }
    else if(capacity < size +1){

        // whn we're about to incrase capacity
            size_t old_cap = capacity; 
            capacity*=2;
            T * new_arr = new T[capacity];  

            new_arr = capacity;
            for(size_t i =0; i < old_cap; ++i )
                new_arr[i] =  arr[i];
    }

    new_arr[size++] = elem;
    free(arr);
    arr = new_arr; // new arr is oficially a pointer


}

template <typename T> 
T vector<T>::at(size_t i){
    return arr[i];
}

template <typename T> 
T vector<T>::front(){
    return arr[0]; // break the program
}

template <typename T> 
T vector<T>::back(){
    return arr[size-1];
}

template <typename T> 
T vector<T>::operator[](size_t index){
    return arr[index];
}
