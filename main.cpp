#include <iostream>
#include "premiers.hpp"

int main()
{
    std::cout << "Entrez un nombre : ";
    unsigned long int num {};
    std::cin >> num;
    std::vector<unsigned long int> divs {decompose(num)};
    for(std::vector<unsigned long int>::iterator i {divs.begin()}; i != divs.end(); i++)
        std::cout << *i << "; ";
    std::cout << std::endl;
    return 0;
}
