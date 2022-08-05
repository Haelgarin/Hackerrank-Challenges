#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

void miniMaxSum(std::vector<int> arr)
{
	std::sort(arr.begin(), arr.end());

	int64_t minSum{};
	int64_t maxSum{};

	for (int64_t i{ 0 }; i < 4; ++i)
	{
		minSum += arr[i];
		maxSum += arr[((arr.size() - 1) - i)];
	}

	std::cout << minSum << " " << maxSum << std::endl;
}

int main(int argc, char** argv)
{

	std::vector<int> vec{ 256741038, 623958417, 467905213, 714532089, 938071625 };

	miniMaxSum(vec);

	return 0;
}