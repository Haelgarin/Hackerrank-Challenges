#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

int flippingMatrix(const std::vector<std::vector<int>>& matrix)
{
	int sum{ 0 };
	int64_t matSize = matrix[0].size() - 1;

	for (int i{ 0 }; i < matrix[0].size() / 2; ++i)
	{
		for (int j{ 0 }; j < matrix[0].size() / 2; ++j)
		{
			int max1{ std::max(matrix[i][j], matrix[i][static_cast<int64_t>(matSize - j)]) };
			int max2{ std::max(matrix[static_cast<int64_t>(matSize - i)][j], matrix[static_cast<int64_t>(matSize - i)][static_cast<int64_t>(matSize - j)]) };

			sum += std::max(max1, max2);
		}
	}

	return sum;
}

int main(int argc, char** argv)
{

	std::vector<std::vector<int>> test
	{
		{ 112, 42, 83, 119 },
		{ 56, 125, 56, 49 },
		{ 15, 78, 101, 43 },
		{ 52, 98, 114, 108 }
	};

	std::cout << flippingMatrix(test) << std::endl;

	

	return 0;
}
