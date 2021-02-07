#include "stdafx.h"

/* judge num is prime or not */
bool is_prime(uint64_t num)
{
    if (0 == num)
        return false;

    if (1 == num)
        return false;

    for (uint64_t i = 2; i <= num/2; ++i)
        if (num % i == 0)
            return false;

    return true;
}
