#include "stdafx.h"

bool is_match(const std::vector<int>& permu)
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


int main(int argc, char* argv[])
{
    std::vector<int> permu({0,1,2,3,4,5,6,7,8,9});

    uint64_t result = 0;
    do {
        if (is_match(permu))
        {
            uint64_t permu_num = 0;
            for (int i = 0; i < 11; ++i)
                permu_num += (permu[9 - i] * pow(10, i));
            result += permu_num;
        }
    } while (std::next_permutation(permu.begin(), permu.end()));

    std::cout << result << std::endl;
    return 0;
}