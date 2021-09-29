#include <iostream>
#include <string>
#include "VipMember0.h"

Vipmember0::Vipmember0(const std::string& name, int no, double w, const std::string& prv)
            :full_name(name),number(no)
{
    set_weight(w);
    set_privilege(prv);
}

void Vipmember0::print() const {
    std::cout << "No." << no() << ":" << name() << "(" << get_weight() << "kg)" << "特典=" << privilege << std::endl;
}
