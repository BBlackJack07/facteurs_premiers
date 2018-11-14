#ifndef HEADER_PRIME_NUMBERS
#define HEADER_PRIME_NUMBERS

#include <vector>
#include <cmath>

using Int = unsigned long long int;

bool isPrime(Int number);

std::vector<Int> factorise(Int number);

std::vector<unsigned int> crible(unsigned int n);

#endif //HEADER_PRIME_NUMBERS
