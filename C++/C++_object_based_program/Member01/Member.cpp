#include <iostream>
#include "Member.h"

Member::Member(const std::string& name, int no, double w): full_name(name), number(no){
    set_weight(w);
}

void Member::print() const{
    std::cout << "No." << number << ":" << full_name << "(" << weight << "kg) " << std::endl;
}