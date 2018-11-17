/*
    This program is called 'Prime Numbers'. It can be used to decompose positive integers in prime factors.
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

#include "prime_numbers.hpp"

bool isPrime(Int number)
{
    if(number % 2 == 0 && number != 2)
        return false;
    if(number == 1)
        return false;
    for(Int i {3}; i < ceil(sqrt(number)) + 1; i+=2)
    {
        if(number % i == 0)
            return false;
    }

    return true;
}

std::vector<Int> factorise(Int number)
{
    Int n {number};
    Int divisor {2};
    std::vector<Int> factors {};
    while (divisor != ceil(sqrt(number))+1)
    {
        if(isPrime(divisor) && n%divisor == 0)
        {
            n = n/divisor;
            factors.push_back(divisor);
        }
        else
            divisor++;
    }
    if(isPrime(n))
        factors.push_back(n);
    return factors;
}

std::vector<unsigned int> crible(unsigned int n)
{
    std::vector<unsigned int> primeNumbers {};
    for (unsigned int i {2}; i < n; i++)
    {
        if (isPrime(i))
            primeNumbers.push_back(i);
    }

    return primeNumbers;
}

