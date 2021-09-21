#include <iostream>
#include "Accounting.h"

int main(){
    Accounting nakano("中野", 1000 ,2125,1,24);
    Accounting yamada("山田", 200 ,2123,7,15);

    nakano.spend(200);
    yamada.earn(100);

    std::cout << "中野くん" << std::endl;
    std::cout << "氏名" << nakano.name() << std::endl;
    std::cout << "資産" << nakano.asset() << "円" << std::endl
                        << nakano.birthday().year() << "年"
                        << nakano.birthday().month() << "月"
                        << nakano.birthday().day() << "日" << std::endl;

    std::cout << std::endl;
    std::cout << "山田君" << std::endl;
    std::cout << "氏名" << yamada.name() << std::endl;
    std::cout << "資産" << yamada.asset() << "円" << std::endl;
    std::cout << "誕生日" << yamada.birthday() << std::endl;
    

}