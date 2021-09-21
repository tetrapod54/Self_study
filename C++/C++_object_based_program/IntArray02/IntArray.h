#ifndef ___Class_IntArray
#define ___Class_IntArray

class IntArray{
private:
    int nelem;
    int* vec;

public:
    explicit IntArray(int size) :nelem(size) { vec = new int[nelem]; }
    ~IntArray() {delete[] vec;}

    int size() const {return nelem; }
    int& operator[](int j) {return vec[j];}
};

IntArray& IntArray::operator =(const IntArray& x){
    if (&x != this){
        if(nelem != x.nelem){
            delete[] vec;
            nelem = x.nelem;
            vec = new int[nelem];
        }
        for(int i=0;i<nelem;i++){
            vec[i] = x.vec[i];
        }
    }

    return *this;
}


#endif