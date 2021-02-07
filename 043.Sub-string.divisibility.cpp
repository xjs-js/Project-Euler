#include <cstdlib>
#include <vector>
#include <iostream>

/**
 * Sub-string divisibility
 * https://projecteuler.net/problem=43
 * @date 2021-02-07 周四 22:48
 */

/* generate numbers from 0,1,2,3,4,5,6,7,8,9,10 */
constexpr int NUM = 10;

bool chosen[NUM];
std::vector<int> permu;

bool is_match()
{
    int num_0 = permu[1] * 100 + permu[2] * 10 + permu[3];
    if (num_0 % 2) return false;

    int num_1 = permu[2] * 100 + permu[3] * 10 + permu[4];
    if (num_1 % 3) return false;

    int num_2 = permu[3] * 100 + permu[4] * 10 + permu[5];
    if (num_2 % 5) return false;

    int num_3 = permu[4] * 100 + permu[5] * 10 + permu[6];
    if (num_3 % 7) return false;

    int num_4 = permu[5] * 100 + permu[6] * 10 + permu[7];
    if (num_4 % 11) return false;

    int num_5 = permu[6] * 100 + permu[7] * 10 + permu[8];
    if (num_5 % 13) return false;

    int num_6 = permu[7] * 100 + permu[8] * 10 + permu[9];
    if (num_6 % 17) return false;

    return true;
}


uint64_t result = 0;
void search()
{
    if (permu.size() == NUM)
    {
        if (is_match())
        {
            uint64_t pandigital = 0;
            for (int i = 0; i < NUM; ++i)
            {
                pandigital += (permu[NUM-1-i] * pow(10, i));
            }
            std::cout << pandigital << std::endl;
            result +=  pandigital;
        }
        return;
    }
    else
    {
        for (int i = 0; i < NUM; ++i)
        {
            if (chosen[i])
                continue;
            permu.push_back(i);
            chosen[i] = true;
            search();
            chosen[i] = false;
            permu.pop_back();
        }
    }
}



int main(int argc, char* argv[])
{
    for (int i = 0; i < NUM; ++i)
        chosen[i] = false;
    search();
    std::cout << result << std::endl;
    return 0;
}