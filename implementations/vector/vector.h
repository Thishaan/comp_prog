#include <cstdlib>

template<typename T>

class vector{
    typedef struct itearator{
        T * iterator; 
    }iter;

    private:

    T * arr; // underlying array
    size_t size;
    size_t capacity;

    public:

   
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
    vector opreator=(const vector & other);
    vector opreator=(vector & other);


    T at(size_t index);
    T front();
    T back();
    T operator[](size_t index); 


    iter begin();
    iter end(); 

  //size_t end();

    void pop_back();






};