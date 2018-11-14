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

