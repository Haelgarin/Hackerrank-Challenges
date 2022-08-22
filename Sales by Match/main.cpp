#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdint>

int sockMerchant(int n, std::vector<int> ar)
{
	int count{};

	std::sort(ar.begin(), ar.end());

	int tempCount{ 1 };

	for (size_t i{ 1 }; i < ar.size(); ++i)
	{
		if (ar.at(i) == ar.at(i - 1))
		{
			++tempCount;
		}

		else
		{
			tempCount = 1;
		}

		if (tempCount % 2 == 0)
		{
			++count;
		}
	}

	return count;
}

int main(int argc, char** argv)
{

	std::cout << sockMerchant(9, std::vector<int>{ 10, 20, 20, 10, 10, 30, 50, 10, 20 });

	return 0;
}