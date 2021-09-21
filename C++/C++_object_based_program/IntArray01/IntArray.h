#ifndef ___Class_IntArray
#define ___Class_IntArray

class IntArray{
private:
    int nelem;
    int* vec;

public:
    IntArray(int size) :nelem(size) { vec = new int[nelem]; }

    int size() const {return nelem; }
    int& operator[](int j) {return vec[j];}
};

#endif