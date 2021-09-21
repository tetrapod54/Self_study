#ifndef ___Class_Member
#define ___Class_Member

#include <string>

class Member{
private:
    std::string full_name;
    int number;
    double weight;

public:
    //---コンストラクタ--//
    Member(const std::string& name, int no, double w);

    //---氏名取得（full_nameのゲッタ）---//
    std::string name() const { return full_name;}

    //--- 会員番号取得 （numberのゲッタ）--- //
    int no() const {return number;}

    //--- 体重取得（weightのゲッタ）--- //
    double get_weight() const {return weight;}

    void set_weight(double w) {weight = (w > 0) ? w:0;}

    void print() const;

};


#endif