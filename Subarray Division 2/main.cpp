#include <iostream>
#include <vector>
#include <cstdint>

int birthday(const std::vector<int>& s, int d, int m) 
{
	int count{};

	for (int i{ 0 }; i <= (s.size() - m); ++i)
	{
		int tempSum{};

		for (int j{ 0 }; j < m; ++j)
		{
			tempSum += s[static_cast<int64_t>(i) + j];
		}

		if (tempSum == d)
		{
			++count;
		}

		tempSum = 0;
	}

	return count;
}

int main(int argc, char** argv)
{

	std::cout << birthday(std::vector<int>{ 2, 2, 1, 3, 2 }, 4, 2) << std::endl;

	return 0;
}