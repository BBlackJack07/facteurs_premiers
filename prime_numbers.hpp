#ifndef HEADER_PRIME_NUMBERS
#define HEADER_PRIME_NUMBERS

#include <vector>
#include <cmath>

using Int = unsigned long long int;

bool isPrime(Int num);

std::vector<Int> factor(Int num);

std::vector<unsigned int> crible(unsigned int n);

#endif //HEADER_PRIME_NUMBERS
