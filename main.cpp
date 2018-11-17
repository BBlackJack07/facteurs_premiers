/*
    This program is called 'Prime Numbers'. It is used to factorise positive integers in prime factors.
    Copyright (C) 2018  BBlackJack07

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>
*/

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

