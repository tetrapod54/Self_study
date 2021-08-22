#include <iostream>

template<typename X ,typename Y>
struct some{
    X x;
    Y y;
};

some<int,long> s;

class Stack_of_int{
    int* data_;
    int index_ ;
    int capacity_;

public:
    explicit Stack_of_int(int n) : capacity_(n),index_(0){
        data_ = new int[capacity_];
    }

    ~Stack_of_int(){
        delete[] data_;
    }

    void push(int x){
        if (index_ < capacity_){
            data_[index_++] = x;
        }
    }

    int top() const {
        return data_[index_-1];
    }

    void pop(){
        if (index_ > 0){
            --index_;
        }
    }
};

class Stack_of_long{
    long* data_;
    int index_;
    int capacity_;

public:
    explicit Stack_of_long(int n) : capacity_(n),index_(0){
        data_ = new long[capacity_];
    }

    ~Stack_of_long(){
        delete[] data_;
    }

    void push(long x){
        if(index_ < capacity_) {
            data_[index_++] = x;
        }
    }

    long top() const {
        return data_[index_-1];
    }

    void pop(){
        if(index_ > 0){
            --index_;
        }
    }
};

