#include <iostream>
#include <vector>
#include <cstdint>

uint64_t diagonalDifference(const std::vector<std::vector<int>>& arr)
{
    int64_t leftToRightDiagonal{};
    int64_t rightToLeftDiagonal{};

    int64_t i{ 0 };
    int64_t j{ static_cast<int64_t>(arr[0].size() - 1) };

    while (i < static_cast<int64_t>(arr[0].size()))
    {
        leftToRightDiagonal += arr[i][i];
        rightToLeftDiagonal += arr[j][i];

        ++i;
        --j;
    }

    return abs(leftToRightDiagonal - rightToLeftDiagonal);
}

int main(int argc, char** argv)
{

    return 0;
}