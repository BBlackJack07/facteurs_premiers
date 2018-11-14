#include "premiers.hpp"

bool isFirst(Int num)
{
    if(num % 2 == 0 && num != 2)
        return false;
    if(num == 1)
        return false;
    for(Int i {3}; i < ceil(sqrt(num)) + 1; i+=2)
    {
        if(num % i == 0)
            return false;
    }

    return true;
}

std::vector<Int> factor(Int num)
{
    Int n {num};
    Int div {2};
    std::vector<Int> divs {};
    while (div != ceil(sqrt(num))+1)
    {
        if(isFirst(div) && n%div == 0)
        {
            n = n/div;
            divs.push_back(div);
        }
        else
            div++;
    }
    if(isFirst(n))
        divs.push_back(n);
    return divs;
}

std::vector<unsigned int> crible(unsigned int n)
{
    std::vector<unsigned int> primeNumbers {};
    for (unsigned int i {2}; i < n; i++)
    {
        if isFirst(i)
            primeNumbers.push_back(i);
    }

    return primeNumbers;
}

