#include <string>
#include <iostream>

int main(){

    std::string suzuki_name = "鈴木龍一";
    std::string suzuki_number = "12345678";
    long suzuki_balance = 1000;

    std::string takeda_name = "武田浩文";
    std::string takeda_number ="987654321";
    long takeda_balance = 200;

    suzuki_balance -= 200;
    takeda_balance += 100;

    std::cout << "鈴木くんの口座：\"" <<  suzuki_name << "\"(" << suzuki_number << ")" << suzuki_balance << "円\n";
    std::cout << "武田くんの口座：\"" <<  takeda_name << "\"(" << takeda_number << ")" << takeda_balance << "円\n";

}