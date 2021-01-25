#include <iostream>
#include <cmath>
/**
 *  https://projecteuler.net/problem=2
 *  @date 2020-01-25
 *  @return
 */

#define curly ((1 + sqrt(5)) / 2.0)
#define capital ((1- sqrt(5)) / 2.0)
constexpr uint64_t max_num = 4000000;

int main()
{
    int i = 1;
    uint64_t fib_i = 0;
    uint64_t result_sum = 0;
    do
    {
        /* use the formula to get the number i fibonacci number */
        ++i;
        fib_i = (pow(curly, i) - pow(capital, i)) / sqrt(5);

        /* find even fibonacci numbers */
        if (fib_i % 2 == 0)
            result_sum += fib_i;

    } while(fib_i < max_num);

    std:: cout << "sum = " << result_sum << std::endl;
    return 0;
}