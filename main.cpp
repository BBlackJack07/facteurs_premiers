#include <iostream>
#include "prime_numbers.hpp"

int main()
{
    std::cout << "Entrez un nombre : ";
    Int inputNumber {};
    std::cin >> inputNumber;
    std::vector<Int> factors {factorise(inputNumber)};
    std::cout << std::endl << inputNumber << " = ";
    for(std::vector<Int>::iterator i {factors.begin()}; i != factors.end(); i++)
    {
        if ( i == factors.end() - 1)
            std::cout << *i;
        else
            std::cout << *i << " x ";
    }
    std::cout << std::endl;
    return 0;
}

