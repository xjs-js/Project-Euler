#include <iostream>

/**
 * https://projecteuler.net/problem=1
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 * @date 2020-01-25
 * @return
 */

int main()
{
    int MAX_NUM = 1000;
    uint64_t result_sum = 0;
    for (int i = 1; i < MAX_NUM; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
            result_sum += i;
    }

    std::cout << "sum = " << result_sum << std::endl;

    return 0;
}