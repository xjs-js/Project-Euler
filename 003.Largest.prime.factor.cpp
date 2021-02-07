#include <cstdlib>
#include <iostream>

#include "base.hpp"

/**
 * Largest prime factor
 * https://projecteuler.net/problem=3
 * @date 2021-02-07 周日
 */

int find_largest_prime_factor(uint64_t num)
{
    for (uint64_t i = 2; i < num; ++i)
    {
        if (num % i == 0)
        {
            uint64_t remain = num / i;
            if (is_prime(remain))
            {
                return remain;
            }
        }
    }
    return 0;
}

int main(int argc, char* argv[])
{
    std::cout << find_largest_prime_factor(600851475143) << std::endl;
    return 0;
}