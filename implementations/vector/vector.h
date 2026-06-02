#include <cstdlib>
#include<initializer_list>
#include <stddef.h>


    // an iterator over the class
template<typename vector>




struct iterator{

        public:

        using ValueType =  vector::ValType;
        using PointerType = ValueType*;
        using ReferenceType = ValueType&;

        inline iterator(PointerType pointer ) : m_ptr(pointer) {} ;

        
        inline vector& operator++(){
            m_ptr++;
            return *this;
        }

        inline  vector& operator--(){
             m_ptr--;
            return *this;
        }
        inline  vector& operator++(int){
            iterator it =  *this;
            ++(*this);
            return it;
        }
        inline  vector& operator++(int){
            iterator it =  *this;
            --(*this);
            return it;
        }
        inline ReferenceType operator[](size_t idx){
            return *(m_ptr + idx);
        }  
        inline PointerType operator->(){
            return (m_ptr);
        } 

        inline ReferenceType operator*(){
                 return *(m_ptr);
        }

        inline bool operator==(const iterator & other) const{

            return other.m_ptr == m_ptr;
        }

         inline bool operator!=(const iterator & other) const{

            return !(this == other);
        }


        private:
            PointerType * m_ptr; 
};



template<typename T>

class vector{
    

    public:
    using ValType = T;
    using iter = iterator<vector<T>>;

        // should not throw an exception
    inline vector(size_t size=0, T val = 0) noexcept{

        this->size =  size;

        if(size == 0 ){
             arr= nullptr;
             capacity=0;
        }

        else{

            arr = new T[size];// allocat the array;
            for(size_t i =0; i < size; i++){
                arr =  val;
            }
        }
    }

    void push_back(T elem);
    //void swap();
    bool operator==(vector & other);
    vector operator=(const vector & other);
    vector operator=(vector & other);
    // copy constructors

    //vector(const vector& other);
    vector & operator=(std::initializer_list<T> & list); 

    T at(size_t index);
    T front();
    T back();
    T operator[](size_t index); 


    iter begin();
    iter end(); 

  //size_t end();

    void pop_back();

    inline T begin(){
            return m_ptr;
        }
    inline T end(){
            return (m_ptr + size)
        }

    private:

    T * arr; // underlying array
    size_t size;
    size_t capacity;


};