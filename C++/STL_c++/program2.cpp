#include <iostream>
#include <string>
#include <vector>
#include <memory>

int main(void){
    std::shared_ptr<std::string> pNico(new std::string("nico"));
    std::shared_ptr<std::string> pJutta(new std::string("jutta"));

// capitalize person names
    (*pNico)[0] = 'N';
    pJutta->replace(0,1,"J");
 // put them multiple times in a container
    std::vector<std::shared_ptr<std::string>> whoMadeCoffee;
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pNico);
    whoMadeCoffee.push_back(pJutta);
    whoMadeCoffee.push_back(pNico);
 // print all elements
    for (auto ptr : whoMadeCoffee) {
        std::cout << *ptr << "  ";
    }

    std::cout << std::endl;

    // overwrite a name again
    *pNico = "Nicolai";
 // print all elements again
    for (auto ptr : whoMadeCoffee) {
        std::cout << *ptr << "  ";
    }
    std::cout << std::endl;
 // print some internal data
    std::cout << "use_count: " << whoMadeCoffee[0].use_count() << std::endl;

}