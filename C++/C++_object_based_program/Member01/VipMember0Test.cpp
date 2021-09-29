#include <iostream>
#include "VipMember0.h"

int main(){
    Vipmember0 mineya("峰屋龍次",17,89.2,"会費全額免除");
    double weight = mineya.get_weight();
    mineya.set_weight(weight- 15.3);

    mineya.print();
}