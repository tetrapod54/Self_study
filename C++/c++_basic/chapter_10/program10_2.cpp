#include <string>
#include <iostream>

class Account{
private:
    std::string full_name;
    std::string number;
    long crnt_balance;

public:
    Account(std::string name,std::string num,long amnt){
        full_name = name;
        number  = num;
        crnt_balance = amnt;
    }

    std::string name(){
        return full_name;
    }

    std::string no(){
        return number;
    }

    long balance(){
        return crnt_balance;
    }

    void deposit(long amnt){
        crnt_balance += amnt;
    }

    void withdraw(long amnt){
        crnt_balance -= amnt;
    }
};

int main(){

    Account suzuki( "鈴木龍一","12345678",1000);
    Account takeda("武田浩文","987654321",200);

    suzuki.withdraw(200);
    takeda.deposit(100);

    std::cout << "鈴木くんの口座：\"" <<  suzuki.name() << "\"(" << suzuki.no() << ")" << suzuki.balance() << "円\n";
    std::cout << "武田くんの口座：\"" <<  takeda.name() << "\"(" << takeda.no() << ")" << takeda.balance() << "円\n";

}