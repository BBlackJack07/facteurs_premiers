#include <iostream>
#include "premiers.hpp"

int main()
{
    std::cout << "Entrez un nombre : ";
    Int num {};
    std::cin >> num;
    std::vector<Int> divs {factor(num)};
    std::cout << num << " = ";
    for(std::vector<Int>::iterator i {divs.begin()}; i != divs.end(); i++)
    {
        if ( i == divs.end() - 1)
            std::cout << *i;
        else
            std::cout << *i << " x ";
    }
    std::cout << std::endl;
    return 0;
}
