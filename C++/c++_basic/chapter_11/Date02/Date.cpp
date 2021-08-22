#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

Date::Date(){
    time_t current = time(nullptr);
    struct tm* local = localtime(&current);

    y = local->tm_year + 1900;
    m = local->tm_mon + 1;
    d = local->tm_mday;
}

Date::Date(int yy, int mm,int dd){

    y = yy;
    m = mm;
    d = dd;
}

Date Date::preceding_day() const{

    int dmax[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    Date temp = *this;

    if(temp.d > 1){
        temp.d--;
    }
    else{
        if(--temp.m < 1){
            temp.y--;
            temp.m = 12;
        }
        temp.d = dmax[temp.m -1];
    }

    return temp;
}

std::string Date::to_string() const {
    std::ostringstream s;
    s << y << "年" << m << "月" << d << "日";
    return s.str();
}

std::ostream& operator<<(std::ostream& s,const Date& x){
    return s << x.to_string();
}

std::istream& operator>>(std::istream& s, Date& x){

    int yy,mm,dd;
    char ch;

    s >> yy >> ch >> mm >> ch >> dd;
    x = Date(yy,mm,dd);
    return s;
}