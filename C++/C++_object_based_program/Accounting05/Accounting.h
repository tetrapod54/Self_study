#ifndef ___Class_Accounting
#define ___Class_Accounting

#include <iostream>
#include "/workspaces/Self_study/C++/C++_object_based_program/Date02/Date.h"

class Accounting{
private:
    std::string full_name;
    long crnt_asset;
    Date birth;

public:
    //コンストラクタ
    Accounting(const std::string& name, long amnt, int y, int m, int d);

    void earn(long amnt);
    void spend(long amnt);

    std::string name() const {return full_name;}
    long asset() const {return crnt_asset;}
    Date birthday() const {return birth;}
};

#endif