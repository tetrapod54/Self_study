#include <iostream>
#include "Member.h"

int main(){
    Member kaneko("金子健太",15,75.2);

    double weight = kaneko.get_weight();
    kaneko.set_weight(weight-3.7);

    std::cout << "会員番号" << kaneko.no() << "の" << kaneko.name() << "は" << kaneko.get_weight() << "kgです" << std::endl;
}