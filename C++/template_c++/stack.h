#ifndef STACK_H_
#define STACK_H_

template <class T>
class Stack{
    T* data_;
    int index_ ;
    int capacity_ ;

public:
    explicit Stack(int n);
    ~Stack();

    void push(T x);
    T top() const;
    void pop();
    int size() const;
};
#endif

