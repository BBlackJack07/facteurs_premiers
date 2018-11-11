#include "premiers.hpp"

bool premier(unsigned long int num)
{
    if(num % 2 == 0 && num != 2)
        return false;
    if(num == 1)
        return false;
    for(unsigned long int i {3}; i < ceil(sqrt(num)) + 1; i+=2)
    {
        if(num % i == 0)
            return false;
    }

    return true;
}

std::vector<unsigned long int> decompose(unsigned long int num)
{
    unsigned long int n {num};
    unsigned long int div {2};
    std::vector<unsigned long int> divs {};
    while (div != ceil(sqrt(num))+1)
    {
        if(premier(div) && n%div == 0)
        {
            n = n/div;
            divs.push_back(div);
        }
        else
            div++;
    }
    if(premier(n))
        divs.push_back(n);
    return divs;
}

