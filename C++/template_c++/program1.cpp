#include <iostream>

class Object{
public:
    virtual ~Object(){}
};

class Vector : public Object{
    Object** data_ ;
    int capacity_;
    int size_;

public:
    Vector() : data_(0), capacity_(0),size_(0) {}
    ~Vector()
    {
        for(int i=0;i<size_;i++){
            delete data_[i];
        }
        delete[] data_;
    }

    void add(Object* item)
    {
        if(size_ == capacity_){

            capacity_ += 10 ;
            Object** tmp = new Object*[capacity_];

            for(int i=0; i<size_;i++){
                tmp[i] = data_[i];
            }

            delete[] data_;
            data_ = tmp;
        }

        data_[size_++] = item ;
    }

    Object* at(int index){
        if(index < 0 || index >=size_){
            return 0;
        }

        return data_[index];
    }

    int size () const {return size_;}
};

class Integer : public Object{
    int value_;
public:
    Integer(int v) :value_(v){}
    int value() const { return value_;}
};

int main(void){
    Vector v;
    v.add(new Integer(12));
    v.add(new Integer(34));

    for (int i=0; i<v.size(); i++){
        Integer* ptr = (Integer*)v.at(i);
        std::cout << ptr->value() << std::endl;
    }
}