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

#ifndef HEADER_PRIME_NUMBERS
#define HEADER_PRIME_NUMBERS

#include <vector>
#include <cmath>

using Int = unsigned long long int;

bool isPrime(Int number);

std::vector<Int> factorise(Int number);

std::vector<unsigned int> crible(unsigned int n);

#endif //HEADER_PRIME_NUMBERS

