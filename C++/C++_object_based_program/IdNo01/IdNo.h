#ifndef ___Class_IdNo
#define ___Class_IdNo

class IdNo{
private:
    static int counter;
    int id_no;

public:
    IdNo();
    int id() const;
    static int get_max_id();
};

#endif
