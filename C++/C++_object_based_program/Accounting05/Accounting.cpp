#include <string>
#include <iostream>
#include "Accounting.h"

Accounting::Accounting(const std::string& name, long amnt, int y, int m, int d)
                        :birth(y,m,d)
{
    full_name = name;
    crnt_asset = amnt;
}

void Accounting::earn(long amnt){
    crnt_asset += amnt;
}

void Accounting::spend(long amnt){
    crnt_asset -= amnt;
}